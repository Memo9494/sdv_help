from setuptools import find_packages
from setuptools import setup

setup(
    name='xacro',
    version='2.0.8',
    packages=find_packages(
        include=('xacro', 'xacro.*')),
)
