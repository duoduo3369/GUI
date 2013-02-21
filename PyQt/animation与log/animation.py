'''
Created on 2013-2-18

@author: Administrator
'''

import sys

from PyQt4 import QtCore
from PyQt4 import QtGui
import qrc_easing

class PixmapItem(QtCore.QObject):
    def __init__(self, pix):
        super(PixmapItem, self).__init__()

        self.pixmap_item = QtGui.QGraphicsPixmapItem(pix)

    def _set_pos(self, pos):
        self.pixmap_item.setPos(pos)

    pos = QtCore.pyqtProperty(QtCore.QPointF, fset=_set_pos)

class Window(QtGui.QMainWindow):
    def __init__(self, parent=None):
        super(Window, self).__init__(parent)
        
        self.scene = QtGui.QGraphicsScene()
        self.scene.setSceneRect(0,0,400,300)
        pix = QtGui.QPixmap(':/images/qt-logo.png')
        self.pix = PixmapItem(pix)
        self.scene.addItem(self.pix.pixmap_item)
        
        self.view = QtGui.QGraphicsView()
        self.view.setScene(self.scene)
        self.setCentralWidget(self.view)
        
        self.m_anim = QtCore.QPropertyAnimation(self.pix, 'pos')
        self.m_anim.setEasingCurve(QtCore.QEasingCurve.OutBounce)
        self.m_anim.setDuration(500)
        self.timer = QtCore.QTimer()
        self.timer.start(500)
        self.x = 0
        self.connect(self.timer,QtCore.SIGNAL("timeout()"),self.startAnimation)
        self.startAnimation()
    def startAnimation(self):
        self.x = self.x + 10
        self.m_anim.setStartValue(QtCore.QPointF(self.x, 0))
        self.m_anim.setEndValue(QtCore.QPointF(self.x+100, 100))
        
        #self.m_anim.setLoopCount(-1)
        self.m_anim.start()
if __name__ == '__main__':
    app = QtGui.QApplication(sys.argv)
    form = Window()
    form.show()    
    app.exec_()