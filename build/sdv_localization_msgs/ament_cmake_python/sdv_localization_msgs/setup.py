from setuptools import find_packages
from setuptools import setup

setup(
    name='sdv_localization_msgs',
    version='3.0.0',
    packages=find_packages(
        include=('sdv_localization_msgs', 'sdv_localization_msgs.*')),
)
