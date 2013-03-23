import sys
from PyQt4.QtCore import *
from PyQt4.QtGui import *

from Ui_MainWindow import Ui_MainWindow

import resource_rc
import count_lines


__version__ = "1.0.0"

class MainWindow(QMainWindow, Ui_MainWindow):

    def __init__(self, parent=None):
        super(MainWindow, self).__init__(parent)
        self.setupUi(self)
        self.connect(self.choiceRootDicButton, SIGNAL("clicked()"), self.choice_root_dic)
        self.connect(self.countButton, SIGNAL("clicked()"),self.start_count)
        
    def choice_root_dic(self):
    
        dir = QFileDialog.getExistingDirectory(self, 
                                                self.tr("Choice Root Directory"),
                                                 "/home",
                                                 QFileDialog.ShowDirsOnly
                                                 and QFileDialog.DontResolveSymlinks);
        self.rootDicPathEdit.setText(dir)
        
    def start_count(self):     
            
        self.listWidget.clear()
        
        if not self.rootDicPathEdit.text():
            self.listWidget.addItem(self.tr("Please choice root directory fisrt!"))
            return 
        TYPES = self.fileTypeEdit.text()
        count = 0
        root = str(self.rootDicPathEdit.text())
        for path in count_lines.all_files(root,str(TYPES)):
            self.listWidget.addItem(self.tr(path))
            count += count_lines.count_file_lines(path)
        self.totalLineEdit.setText(str(count))
        


def main():
    app = QApplication(sys.argv)
    qtTranslator = QTranslator()
    if qtTranslator.load("trans_CN.qm", ":/"):
        app.installTranslator(qtTranslator)
    form = MainWindow()
    form.show()
    app.exec_()


main()
