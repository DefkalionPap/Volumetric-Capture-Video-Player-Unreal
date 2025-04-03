// Fill out your copyright notice in the Description page of Project Settings.


#include "GetAllFiles.h"
#include "filesystem"

TArray<FString> UGetAllFiles::GetFiles(FString folderPath)
{
	
	TArray<FString> glTFFiles;
	FString fileName;
	std::string tempString = TCHAR_TO_UTF8(*folderPath);																		  //AI-Suggested Method
	
	for (const auto & entry : std::filesystem::directory_iterator(tempString))                                            //Based on example from GeeksForGeeks
	{
 
		// Converting the path to const char * in the
		// subsequent lines
		std::filesystem::path outfilename = entry.path();
		fileName = FString(outfilename.string().c_str());                                                                      //AI-Suggested Method
		if (fileName.Contains(".glb") || fileName.Contains(".gltf") || fileName.Contains(".drc"))
		{
			glTFFiles.Add(fileName);
		}
	}
			return glTFFiles;                                                                                                  //CHECK FOR NULL
}