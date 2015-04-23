#include "stdafx.h"
#include "global.h"

boost::filesystem::path localPath, dataPath, langPath;
std::ostream &infoStream = std::cout;

std::string msgDataDefault[msgCount] = {
	"I:Updating source",
	"I:Package list refreshed",
	"I:Decompressing package",
	"I:Decompressed",
	"I:Copying files",
	"I:Files copied",
	"I:Deleting files",
	"I:Deleted",
	"I:Searching package",
	"I:Package found",
	"I:Installing package",
	"I:Package installed",
	"I:Package(s) installed",
	"I:Removing package",
	"I:Package removed",
	"I:Upgrading package",
	"I:Reinstalling",
	"I:Running installation script for package ",
	"I:Running initialization script for package ",
	"I:Running purge script",
	"I:Running removal script",
	"I:Done",
	"I:Checking requirement",
	"I:Will install or upgrade these packages:",
	"I:Connecting",
	"I:Downloading data",
	"I:Data downloaded",
	"E:Incorrect pack info from source",
	"E:Script exited with code ",
	"E:Multi overwriting",
	"E:Illegal package",
	"E:Confliction found",
	"E:Invalid dependence",
	"E:Package not found",
	"E:Package already installed",
	"E:Package not installed",
	"E:Needn't upgrade",
	"E:This package is depended by other package",
	"E:Dependence info not found",
	"E:filesystem:",
	"E:network:",
	"E:unzip:Broken File",
	"E:unzip:inflateInit2 failed with code ",
	"E:unzip:inflate failed with code ",
	"E:unzip:inflateEnd failed with code ",
	"E:unzip:Memory overflow",
	"E:unzip:Buffer not enough",
	"E:STD:",
	"W:Conflict Package",
	"W:Script exited with code ",
	", rolling back",
	"W:This package is depended by:"
};
std::string msgData[msgCount];

fProgressReportCallback prCallbackP = NULL;
