class CfgPatches
{
	class BetterBottles_Gear_Drinks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "DZ_Data", "DZ_Gear_Drinks" };
	};
};
class CfgVehicles
{
  class Edible_Base;
	class Bottle_Base;
	class Canteen: Bottle_Base
	{
    repairableWithKits[]={8};
		repairCosts[]={50};
    //weight=250;
		weight=300;
		//varQuantityInit=1000;
		varQuantityInit=750;
		varQuantityMin=0;
		//varQuantityMax=1000;
		varQuantityMax=1250;
  };
	class Canteen_Black: Canteen
	{
    hiddenSelections[]={ "zbytek" };
		hiddenSelectionsTextures[]={ "BetterBottles/dz/gear/drinks/data/canteen_black_co.paa" };
    repairableWithKits[]={8};
		repairCosts[]={50};
    //weight=250;
		weight=300;
		//varQuantityInit=1000;
		varQuantityInit=750;
		varQuantityMin=0;
		//varQuantityMax=1000;
		varQuantityMax=1250;
  };
	class WaterBottle: Bottle_Base
	{
    repairableWithKits[]={5};
		repairCosts[]={75};
    //weight=50;
		weight=100;
    //varQuantityInit=1000;
		varQuantityInit=250;
		varQuantityMin=0;
		//varQuantityMax=1000;
		varQuantityMax=500;
	};
	class GlassBottle: Bottle_Base
	{
    //weight=550;
		weight=500;
    //varQuantityInit=0;
		varQuantityInit=375;
		varQuantityMin=0;
    //varQuantityMax=750;
		varQuantityMax=750;
	};
	class WaterPouch_ColorBase: Bottle_Base
	{
    //weight=250;
		weight=350;
		//varQuantityInit=0;
		varQuantityInit=750;
		varQuantityMin=0;
    //varQuantityMax=1250;
		varQuantityMax=1500;
	};
	class FilteringBottle: Bottle_Base
	{
    repairableWithKits[]={8};
		repairCosts[]={50};
		inventorySlot[]={"Belt_Left"};
		//weight=180;
		weight=200;
		//varQuantityInit=0;
		varQuantityInit=500;
		varQuantityMin=0;
		//varQuantityMax=650;
		varQuantityMax=1000;
	};
	class SodaCan_ColorBase: Edible_Base
	{
		//weight=15;
		weight=15;
		//varQuantityInit=330;
		varQuantityInit=350;
		varQuantityMin=0;
		//varQuantityMax=330;
		varQuantityMax=350;
	};
};
