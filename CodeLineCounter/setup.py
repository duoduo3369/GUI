from distutils.core import setup
import py2exe
#setup(console=[],options = { "py2exe":{"dll_excludes":["MSVCP90.dll"]}})
setup(windows=[{"script" : 'MainWindow.pyw'}],
      options={"py2exe" : {"includes" : ["sip"],
                           "dll_excludes":["MSVCP90.dll"]}})
