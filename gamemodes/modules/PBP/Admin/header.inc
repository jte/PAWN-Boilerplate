/*!
 * PBP/Admin/header.inc
 *
 > Priority: 0
 */

enum AdminLevel:{
	this.INVALID_LEVEL = -1,
	
	this.LEVEL_NONE,
	this.LEVEL_MOD,
	this.LEVEL_ADMIN,
	this.LEVEL_MANAGEMENT,
	
	this.NUM_LEVELS
};


new
	AdminLevel:this.PlayerLevel[MAX_PLAYERS],
	           this.LevelNames[this.NUM_LEVELS][1],
	
	StaticGroup<GROUP_MOD>        = @"Moderator",
	StaticGroup<GROUP_ADMIN>      = @"Administrator",
	StaticGroup<GROUP_MANAGEMENT> = @"Management",
	
	StaticGroup<GROUP_RCON>       = @"RCON Administrator"
;


RegisterUserVariable: "admin-level" => this.PlayerLevel;


forward AdminLevel:GetPlayerAdminLevel(playerid);
forward            SetPlayerAdminLevel(playerid, AdminLevel:level, by_player = INVALID_PLAYER_ID);