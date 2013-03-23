import os, fnmatch
def all_files(root,patterns='*',single_level=False,yield_folders=False):
    patterns = patterns.split(';')
    for path, subdirs, files in os.walk(root):
        if yield_folders:
            files.extend(subdirs)
        files.sort()
        for name in files:
            for pattern in patterns:
                if fnmatch.fnmatch(name,pattern):
                    yield os.path.join(path,name)
                    break
        if single_level:
            break

def count_file_lines(path):
    count = -1
    for count,line in enumerate(open(path,'rU')):
        pass
    count += 1
    return count

TYPES = ['*.cpp','*.h','*.py','*.java']

if __name__ == '__main__':
    count = 0
    for path in all_files('.',';'.join(TYPES)):
        print path
        count += count_file_lines(path)
    print count
