#pragma once

#include <string>

namespace ApprovalTests
{
    class FileUtils
    {
    public:
        static bool fileExists(const std::string& path);

        static int fileSize(const std::string& path);

        static void ensureFileExists(const std::string& fullFilePath);

        static std::string getDirectory(const std::string& filePath);

        static std::string getExtensionWithDot(const std::string& filePath);

        static std::string readFileThrowIfMissing(const std::string& fileName);

        static std::string readFileReturnEmptyIfMissing(const std::string& fileName);

        static void writeToFile(const std::string& filePath, const std::string& content);
    };
}
