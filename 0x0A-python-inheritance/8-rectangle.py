#!/usr/bin/python3
"""Represents a class that inherits from another class"""


BaseGeometry = __import__('7-base_geometry').BaseGeometry
class Rectangle(BaseGeometry):
    """A class Rectangle that inherits from class BaseGeometry"""
    def __init__(self, width, height):
        self.__width = width
        self.__height = height
        self.integer_validator("name", width)
        self.integer_validator("height", height)