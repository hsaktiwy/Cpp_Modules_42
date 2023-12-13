#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <fstream>
#include <exception>
#include <cctype>
#include <cstdlib>
#include <map>
class BitcoinExchange {
    private:
        std::map<std::string, float>    data;
        std::string                     FileDataName;
        std::string                     InputFileName;
        std::ifstream                   FileData;
        std::ifstream                   InputFile;
        BitcoinExchange();
    public:
        BitcoinExchange(const std::string& filename);
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& copy);
        BitcoinExchange& operator=(const BitcoinExchange& obj);
        void    run( void );
        class FilesException : public std::exception{
            public:
                const char *what( void ) const throw();
        };
};
#endif