#include <YSI\y_hooks>


/*
			SA_SCENES
	This file contains all scenes.
	Comment / uncomment files you want or not.
	
	exteriors scenes have two files. The first contains objects, the second contains removebuildings. You need to unable/disable both.
	exemple :
				#include "sa_scenes\traphouse1-remov"
				#include "sa_scenes\traphouse1"
				
				//#include "sa_scenes\traphouse1-remov"
				//#include "sa_scenes\traphouse1"
	-----------------------------------------------------------------------------------------
*/


static gobj;


hook OnGameModeInit(){

#include "sa_scenes\deathscene"
#include "sa_scenes\greenhouse1"
#include "sa_scenes\greenhouse2"
#include "sa_scenes\traphouse1"
#include "sa_scenes\traphouse2"
#include "sa_scenes\traphouse3"
#include "sa_scenes\bank_hall"
#include "sa_scenes\airport_int"
#include "sa_scenes\nightclub1"
#include "sa_scenes\illegal_garages"
#include "sa_scenes\complex1"
#include "sa_scenes\apartment1"
#include "sa_scenes\apartment2"
#include "sa_scenes\apartment3"
#include "sa_scenes\lavomatic"
#include "sa_scenes\terrace"
#include "sa_scenes\moskee"
#include "sa_scenes\museum_hall"
#include "sa_scenes\clothing_shop"
#include "sa_scenes\drug_store"
#include "sa_scenes\morgue"
#include "sa_scenes\apartment5"
#include "sa_scenes\complex3"
#include "sa_scenes\bike_shop"
#include "sa_scenes\apartment4"
#include "sa_scenes\sporting_club1"
#include "sa_scenes\restaurant1"
#include "sa_scenes\church"
#include "sa_scenes\motel_hall"
#include "sa_scenes\record_label"
#include "sa_scenes\driving_school"
#include "sa_scenes\nightclub2"
#include "sa_scenes\district_attorney"
#include "sa_scenes\unity_extension"
#include "sa_scenes\ganton_bbal"
#include "sa_scenes\bar1"
#include "sa_scenes\barber_shop"
#include "sa_scenes\record_label2"
#include "sa_scenes\scavenger_business"
#include "sa_scenes\glenpark_adds"
#include "sa_scenes\market_public_gard"
#include "sa_scenes\lsfd_hall"
#include "sa_scenes\lsfd_ext"
#include "sa_scenes\court_ext"
#include "sa_scenes\lspd_hall"
#include "sa_scenes\lspd_first_floor"
#include "sa_scenes\lspd_second_floor"
#include "sa_scenes\lspd_briefing_room"
#include "sa_scenes\lspd_chief_office"
#include "sa_scenes\tuning_garage"
#include "sa_scenes\hardware_store"
#include "sa_scenes\electronic_store"
#include "sa_scenes\bike_garage"
#include "sa_scenes\jet"
#include "sa_scenes\sporting_club2"
#include "sa_scenes\court_hall"
#include "sa_scenes\court_first_floor"
#include "sa_scenes\jefferson_remastered"
#include "sa_scenes\chroma_key"
#include "sa_scenes\corona_cemetery"
#include "sa_scenes\ganton_cemetery"
#include "sa_scenes\idle_bbal"
#include "sa_scenes\idlewood_cemetery"
#include "sa_scenes\ls_maps"
#include "sa_scenes\train"
	return 1;
}


hook OnPlayerConnect(playerid){
	
/* 				Remove buildings			*/
	
#include "sa_scenes\glenpark_adds-remov"
#include "sa_scenes\court_ext-remov"
#include "sa_scenes\tuning_garage-remov"
#include "sa_scenes\bike_garage-remov"
#include "sa_scenes\ganton_bbal-remov"
#include "sa_scenes\traphouse1-remov"
#include "sa_scenes\traphouse3-remov"
#include "sa_scenes\jefferson_remastered-remov"
#include "sa_scenes\ganton_cemetery-remov"
#include "sa_scenes\idlewood_cemetery-remov"
#include "sa_scenes\idle_bbal-remov"
#include "sa_scenes\corona_cemetery-remov"
	return 1;
}