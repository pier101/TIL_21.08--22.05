#include "exchange.h"
#include <iostream>
 

void exChange::coinSetup()
{
	tagCoinInfo coin1;
	coin1.coinKind = COIN_BIT;
	coin1.name = "비트코인";
	coin1.description = "온라인 금,최초의 가상화폐";
	coin1.price = 70000000;
	coin1.change = -1.0f;
	_vCoin.push_back(coin1);
	
	
	tagCoinInfo coin2;
	coin2.coinKind = COIN_BIT;
	coin2.name = "비트코인골드";
	coin2.description = "2017년 비트코인을 하드포크한 코인";
	coin2.price = 68250;
	coin2.change = -1.68f;
	_vCoin.push_back(coin2);

	tagCoinInfo coin3;
	coin3.coinKind = COIN_BIT;
	coin3.name = "라이트코인";
	coin3.description = "c++로 개발";
	coin3.price = 260500;
	coin3.change = -2.25f;
	_vCoin.push_back(coin3);

	//-----------------------------------
	tagCoinInfo coin4;
	coin4.coinKind = COIN_BIT;
	coin4.name = "이더리움";
	coin4.description = "비탈릭이만듦";
	coin4.price = 5700000;
	coin4.change = -2.31f;
	_vCoin.push_back(coin4);

	tagCoinInfo coin5;
	coin5.coinKind = COIN_ETH;
	coin5.name = "이더리움 클래식";
	coin5.description = "해킹당해 분리된 이더리움";
	coin5.price = 59600;
	coin5.change = -1.65f;
	_vCoin.push_back(coin5);
	tagCoinInfo coin6;
	coin6.coinKind = COIN_ETH;
	coin6.name = "에이다";
	coin6.description = "차섿 코인";
	coin6.price = 1900;
	coin6.change = -3.02f;
	_vCoin.push_back(coin6);
	//--------------------------

	tagCoinInfo coin7;
	coin7.coinKind = COIN_RIP;
	coin7.name = "리플";
	coin7.description = "리또속";
	coin7.price = 1200;
	coin7.change = -2.22f;
	_vCoin.push_back(coin7);

	tagCoinInfo coin8;
	coin8.coinKind = COIN_RIP;
	coin8.name = "나노코인";
	coin8.description = "리플보다 빠른 코인";
	coin8.price = 5893;
	coin8.change = -0.06f;
	_vCoin.push_back(coin8);

	//-----------------------------------
	tagCoinInfo coin9;
	coin9.coinKind = COIN_ALT;
	coin9.name = "도지코인";
	coin9.description = "머스크";
	coin9.price = 259;
	coin9.change = -4.06f;
	_vCoin.push_back(coin9);

	tagCoinInfo coin10;
	coin10.coinKind = COIN_ALT;
	coin10.name = "위믹스";
	coin10.description = "위메이드가 만듦";
	coin10.price = 18000;
	coin10.change = -6.06f;
	_vCoin.push_back(coin10);
}

void exChange::coinOutput(int coinNum)
{
	for (_viCoin = _vCoin.begin(); _viCoin != _vCoin.end(); ++_viCoin)
	{
		if (_viCoin->coinKind != coinNum) continue;

		cout << "================== 거 래 소 ===================" << endl;
		cout << "이  름 : " << _viCoin->name << endl;
		cout << "가  격 : " << _viCoin->price << endl;
		cout << "변동률 : " << _viCoin->change << endl;
		cout << "설  명 : " << _viCoin->description << endl;
		cout << "==============================================" << endl;
	}
}

exChange::exChange()
{
}

exChange::~exChange()
{
}
