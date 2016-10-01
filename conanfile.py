from conans import ConanFile, CMake, tools
import os


class CerealConan(ConanFile):
    name = "cereal"
    version = "1.2-0"
    license = "See: https://github.com/USCiLab/cereal/blob/master/LICENSE"
    url = "https://github.com/TimSimpson/conan-cereal"
    exports = "include/*"

    def source(self):
       self.run("git clone https://github.com/USCiLab/cereal.git")
       self.run("cd cereal && git checkout 42a45b6e15fcbd1a3d65b033f5d4d0b2ef6c023d")

    def package(self):
        self.copy("*", dst="include", src="cereal/include")
        self.copy("*", dst="include", src="include")
