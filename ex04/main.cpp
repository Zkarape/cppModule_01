/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarapet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:58:02 by zkarapet          #+#    #+#             */
/*   Updated: 2023/09/01 21:58:42 by zkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>

void replaceAll(std::string filename, const std::string &s1, const std::string &s2)
{
	std::ifstream inputFile(filename);
	std::stringstream buffer;
	std::string fileContents;
	int pos = 0;

	if (inputFile.is_open())
		buffer << inputFile.rdbuf();
	else
	{
		std::cerr << "Failed to open file: " << filename << std::endl;
		return;
	}
	inputFile.close();
	fileContents = buffer.str();
	std::ofstream outFile(filename.append(".replace"));
	if (!outFile)
	{
		std::cerr << "Error opening file " << filename << std::endl;
		return ;
	}
	pos = fileContents.find(s1, pos);
	while (pos != std::string::npos)
	{
		fileContents.erase(pos, s1.length());
		fileContents.insert(pos, s2);
		pos += s2.length();
		pos = fileContents.find(s1, pos);
	}
	outFile << fileContents;
	outFile.close();
}

int main(int ac, char **av)
{
	if ((ac != 4) || !av[1] || !av[2] || !av[3] || !*av[1] || !*av[2])
	{
		std::cerr << "Enter filename, s1, s2" << std::endl;
		return (0);
	}
	replaceAll(av[1], av[2], av[3]);
}
