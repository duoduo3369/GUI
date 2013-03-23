# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'E:\python\CodeLineCounter\MainWindow.ui'
#
# Created: Sat Mar 23 10:20:15 2013
#      by: PyQt4 UI code generator 4.9.5
#
# WARNING! All changes made in this file will be lost!

from PyQt4 import QtCore, QtGui

try:
    _fromUtf8 = QtCore.QString.fromUtf8
except AttributeError:
    _fromUtf8 = lambda s: s

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName(_fromUtf8("MainWindow"))
        MainWindow.resize(641, 448)
        self.centralWidget = QtGui.QWidget(MainWindow)
        self.centralWidget.setObjectName(_fromUtf8("centralWidget"))
        self.gridLayout_3 = QtGui.QGridLayout(self.centralWidget)
        self.gridLayout_3.setObjectName(_fromUtf8("gridLayout_3"))
        self.gridLayout_2 = QtGui.QGridLayout()
        self.gridLayout_2.setObjectName(_fromUtf8("gridLayout_2"))
        self.rootDicLabel = QtGui.QLabel(self.centralWidget)
        self.rootDicLabel.setObjectName(_fromUtf8("rootDicLabel"))
        self.gridLayout_2.addWidget(self.rootDicLabel, 0, 0, 1, 1)
        spacerItem = QtGui.QSpacerItem(40, 20, QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Minimum)
        self.gridLayout_2.addItem(spacerItem, 0, 1, 1, 1)
        self.choiceRootDicButton = QtGui.QPushButton(self.centralWidget)
        self.choiceRootDicButton.setObjectName(_fromUtf8("choiceRootDicButton"))
        self.gridLayout_2.addWidget(self.choiceRootDicButton, 0, 2, 1, 1)
        spacerItem1 = QtGui.QSpacerItem(40, 20, QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Minimum)
        self.gridLayout_2.addItem(spacerItem1, 0, 3, 1, 1)
        self.rootDicPathEdit = QtGui.QLineEdit(self.centralWidget)
        self.rootDicPathEdit.setEnabled(False)
        self.rootDicPathEdit.setObjectName(_fromUtf8("rootDicPathEdit"))
        self.gridLayout_2.addWidget(self.rootDicPathEdit, 1, 0, 1, 4)
        self.gridLayout_3.addLayout(self.gridLayout_2, 0, 0, 1, 3)
        self.gridLayout = QtGui.QGridLayout()
        self.gridLayout.setObjectName(_fromUtf8("gridLayout"))
        self.label_2 = QtGui.QLabel(self.centralWidget)
        self.label_2.setObjectName(_fromUtf8("label_2"))
        self.gridLayout.addWidget(self.label_2, 0, 0, 1, 1)
        spacerItem2 = QtGui.QSpacerItem(40, 20, QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Minimum)
        self.gridLayout.addItem(spacerItem2, 0, 1, 1, 1)
        self.fileTypeEdit = QtGui.QLineEdit(self.centralWidget)
        self.fileTypeEdit.setObjectName(_fromUtf8("fileTypeEdit"))
        self.gridLayout.addWidget(self.fileTypeEdit, 1, 0, 1, 2)
        self.gridLayout_3.addLayout(self.gridLayout, 1, 0, 1, 3)
        spacerItem3 = QtGui.QSpacerItem(20, 18, QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Expanding)
        self.gridLayout_3.addItem(spacerItem3, 2, 2, 1, 1)
        self.countButton = QtGui.QPushButton(self.centralWidget)
        self.countButton.setObjectName(_fromUtf8("countButton"))
        self.gridLayout_3.addWidget(self.countButton, 3, 0, 1, 3)
        self.listWidget = QtGui.QListWidget(self.centralWidget)
        self.listWidget.setObjectName(_fromUtf8("listWidget"))
        self.gridLayout_3.addWidget(self.listWidget, 4, 0, 1, 3)
        spacerItem4 = QtGui.QSpacerItem(317, 20, QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Minimum)
        self.gridLayout_3.addItem(spacerItem4, 5, 0, 1, 1)
        self.horizontalLayout = QtGui.QHBoxLayout()
        self.horizontalLayout.setObjectName(_fromUtf8("horizontalLayout"))
        self.totalLineLabel = QtGui.QLabel(self.centralWidget)
        self.totalLineLabel.setObjectName(_fromUtf8("totalLineLabel"))
        self.horizontalLayout.addWidget(self.totalLineLabel)
        self.totalLineEdit = QtGui.QLineEdit(self.centralWidget)
        self.totalLineEdit.setEnabled(False)
        self.totalLineEdit.setObjectName(_fromUtf8("totalLineEdit"))
        self.horizontalLayout.addWidget(self.totalLineEdit)
        self.gridLayout_3.addLayout(self.horizontalLayout, 5, 1, 1, 2)
        spacerItem5 = QtGui.QSpacerItem(20, 40, QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Expanding)
        self.gridLayout_3.addItem(spacerItem5, 6, 1, 1, 1)
        MainWindow.setCentralWidget(self.centralWidget)

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(QtGui.QApplication.translate("MainWindow", "CodeLineCounter", None, QtGui.QApplication.UnicodeUTF8))
        self.rootDicLabel.setText(QtGui.QApplication.translate("MainWindow", "Directory", None, QtGui.QApplication.UnicodeUTF8))
        self.choiceRootDicButton.setText(QtGui.QApplication.translate("MainWindow", "Choice root directory", None, QtGui.QApplication.UnicodeUTF8))
        self.label_2.setText(QtGui.QApplication.translate("MainWindow", "FILE TYPES (Please split file types between(;),example: *.cpp;*.java)", None, QtGui.QApplication.UnicodeUTF8))
        self.fileTypeEdit.setText(QtGui.QApplication.translate("MainWindow", "*.cpp;*.h;*.java;*.py;*pyw;", None, QtGui.QApplication.UnicodeUTF8))
        self.countButton.setText(QtGui.QApplication.translate("MainWindow", "Start Count", None, QtGui.QApplication.UnicodeUTF8))
        self.totalLineLabel.setText(QtGui.QApplication.translate("MainWindow", "Total Lines", None, QtGui.QApplication.UnicodeUTF8))


if __name__ == "__main__":
    import sys
    app = QtGui.QApplication(sys.argv)
    MainWindow = QtGui.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    sys.exit(app.exec_())

