from setuptools import setup

setup(
   name='whisk',
   version='0.1.0',
   author='Janelia labs.',
   author_email='',
   packages=['whisk'],
   # scripts=['bin/trace.exe','bin/traj', 'bin/classify', 'bin/classify-single-whisker', 'bin/classify_radial', 'bin/measure'],
   # scripts=['bin/trace.exe'],
   url='http://pypi.python.org/pypi/whisk/',
   license='LICENSE.txt',
   description='whisk janelia: whisker tracking system',
   long_description=open('README.markdown').read(),
   install_requires=[],
   include_package_data=True,
)