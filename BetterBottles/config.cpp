class CfgPatches
{
  class BetterBottles
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]={ "DZ_Data" };
  };
};

class CfgMods
{
  class BetterBottles
  {
    dir="BetterBottles";
    hideName=0;
    hidePicture=0;
    extra=0;
    name="BetterBottles";
    picture="BetterBottles/data/picture.paa";
    logoSmall="BetterBottles/data/logoSmall.paa";
    logo="BetterBottles/data/logo.paa";
    logoOver="BetterBottles/data/logo.paa";
    action="https://steamcommunity.com/sharedfiles/filedetails/?id=3637975432";
    credits="moldypenguins";
    author="moldypenguins";
    authorID="76561198312711389";
    version="1.1";
    type="mod";
    dependencies[]={};
    class defs
    {
      class engineScriptModule
      {
        value="";
        files[]={ "BetterBottles/scripts/1_core" };
      };
    }
  };
};
