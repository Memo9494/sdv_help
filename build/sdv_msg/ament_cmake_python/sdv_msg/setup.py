from setuptools import find_packages
from setuptools import setup

setup(
    name='sdv_msg',
    version='0.0.0',
    packages=find_packages(
        include=('sdv_msg', 'sdv_msg.*')),
)
