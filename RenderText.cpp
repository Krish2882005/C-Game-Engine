//This Is A Beast Engine File Which Has The License Apache 2.0

#include <iostream>
#include <string>
#include "RenderText.h"
#include "Init.h"


TTF_Font* CalibriFont = nullptr;
TTF_Font* Agency_FB = nullptr;
TTF_Font* Agency_FBBold = nullptr;
TTF_Font* Algerian_Regular = nullptr;
TTF_Font* Arial = nullptr;
TTF_Font* Arial_Rounded_MT_Bold = nullptr;
TTF_Font* Bahnschrift = nullptr;
TTF_Font* Baskerville_Old_Face_Regular = nullptr;
TTF_Font* Bauhaus_93_Regular = nullptr;
TTF_Font* Bell_MT = nullptr;
TTF_Font* Berlin_Sans_FB = nullptr;
TTF_Font* Bernard_MT_Condensed = nullptr;
TTF_Font* Black_ITC_Regular = nullptr;
TTF_Font* Bodoni_MT = nullptr;
TTF_Font* Bodoni_MT_Poster_Compressed_Light = nullptr;
TTF_Font* Book_Antiqua = nullptr;
TTF_Font* Bookman_Old_Style = nullptr;
TTF_Font* Bookshelf_Symbol_7_Regular = nullptr;
TTF_Font* Bradley_Hand_ITC_Regular = nullptr;
TTF_Font* Britannic_Bold = nullptr;
TTF_Font* Broadway_Regular = nullptr;
TTF_Font* Brush_Script_MT_Italic = nullptr;
TTF_Font* Californian_FB = nullptr;
TTF_Font* Calisto_MT = nullptr;
TTF_Font* Cambria = nullptr;
TTF_Font* Cambria_Math_Regular = nullptr;
TTF_Font* Candara = nullptr;
TTF_Font* Castellar_Regular = nullptr;
TTF_Font* Centaur_Regular = nullptr;
TTF_Font* Century_Gothic = nullptr;
TTF_Font* Century_Regular = nullptr;
TTF_Font* Century_SchoolBook = nullptr;
TTF_Font* Chiller_Regular = nullptr;
TTF_Font* Colonna_MT_Regular = nullptr;
TTF_Font* Comic_Sans_MT = nullptr;
TTF_Font* Consolas = nullptr;
TTF_Font* Constantia = nullptr;
TTF_Font* Cooper_Black = nullptr;
TTF_Font* Copperplate_Gothic = nullptr;
TTF_Font* Corbel = nullptr;
TTF_Font* Courier_New = nullptr;
TTF_Font* Courier_Regular = nullptr;
TTF_Font* Curlz_MT_Regular = nullptr;
TTF_Font* Ebrima = nullptr;
TTF_Font* Edwardian_Script_ITC_Regular = nullptr;
TTF_Font* Elephant = nullptr;
TTF_Font* Engravers_MT_Expanded_Medium = nullptr;
TTF_Font* Eras_ITC = nullptr;
TTF_Font* Felix_Titling_Regular = nullptr;
TTF_Font* Fixedsys_Regular = nullptr;
TTF_Font* Footlight_MT_Light = nullptr;
TTF_Font* Forte_Regular = nullptr;
TTF_Font* Franklin_Gothic = nullptr;
TTF_Font* Franklin_Gothic_Book = nullptr;
TTF_Font* Freestyle_Script_Regular = nullptr;
TTF_Font* French_Script_MT_Regular = nullptr;
TTF_Font* Gabriola_Regular = nullptr;
TTF_Font* Gadugi = nullptr;
TTF_Font* Garamond = nullptr;
TTF_Font* Georgia = nullptr;
TTF_Font* Gigi_Regular = nullptr;
TTF_Font* Gill_Sans = nullptr;
TTF_Font* Gill_Sans_MT = nullptr;
TTF_Font* Gloucester_MT_Extra_Condesnsed = nullptr;
TTF_Font* Goudy_Old_Style = nullptr;
TTF_Font* Goudy_Stout_Regular = nullptr;
TTF_Font* Haettenschweiler_Regular = nullptr;
TTF_Font* Harlow_Soid_Semi_Expanded_Italic = nullptr;
TTF_Font* Harrington_Regular = nullptr;
TTF_Font* High_Tower_Text = nullptr;
TTF_Font* Hololens_MDL2_Assets_Regular = nullptr;
TTF_Font* Impact_Regular = nullptr;
TTF_Font* Imprint_MT_Shadow_Regular = nullptr;
TTF_Font* Informal_Roman_Regular = nullptr;
TTF_Font* Ink_Free_Regular = nullptr;
TTF_Font* Jokerman_Regular = nullptr;
TTF_Font* Juice_ITC_Regular = nullptr;
TTF_Font* Kristen_ITC_Regular = nullptr;
TTF_Font* Kunstler_Script_Regular = nullptr;
TTF_Font* Latin_Wide = nullptr;
TTF_Font* Lucida_Bright = nullptr;
TTF_Font* Lucidia_Calligraphy_Italic = nullptr;
TTF_Font* Lucidia_Console_Regular = nullptr;
TTF_Font* Lucidia_Fax = nullptr;
TTF_Font* Lucidia_Handwriting_Italic = nullptr;
TTF_Font* Lucidia_Sans = nullptr;
TTF_Font* Lucidia_Sans_TypeWriter = nullptr;
TTF_Font* Lucidia_Sans_Unicode_Regular = nullptr;
TTF_Font* Magneto_Bold = nullptr;
TTF_Font* Maiandra_GD_Regular = nullptr;
TTF_Font* Malgun_Gothic = nullptr;
TTF_Font* Matura_MT_Script_Capitals_Regular = nullptr;
TTF_Font* Mistral_Regular = nullptr;
//TTF_Font* Modern_Number_20 = nullptr;
TTF_Font* Modern_Regular = nullptr;
TTF_Font* Monotype_Corsiva_Italic = nullptr;
TTF_Font* MS_Reference_sans_Serif_Regular = nullptr;
TTF_Font* MS_Sans_Serif_Regular = nullptr;
TTF_Font* MS_Serif_Regular = nullptr;
TTF_Font* Niagara_Engraved_Regular = nullptr;
TTF_Font* Niagara_Solid_Regular = nullptr;
TTF_Font* Nirmala_UI = nullptr;
TTF_Font* OCR_A_Extended = nullptr;
TTF_Font* Old_English_Text_MT_Regular = nullptr;
TTF_Font* Onyx_Regular = nullptr;
TTF_Font* Palace_Sript_MT_Italic = nullptr;
TTF_Font* Palatino_Linotype = nullptr;
TTF_Font* Papryrus_Regular = nullptr;
TTF_Font* Perpetua = nullptr;
TTF_Font* Perpetua_Titling_MT = nullptr;
TTF_Font* Playbill_Regular = nullptr;
TTF_Font* Pristina_Regular = nullptr;
TTF_Font* Rage_Italic = nullptr;
TTF_Font* Ravie_Regular = nullptr;
TTF_Font* Rockwell = nullptr;
TTF_Font* Roman_Regular = nullptr;
TTF_Font* Script_MT_Bold = nullptr;
TTF_Font* Script_Regular = nullptr;
TTF_Font* Segoe_MDL2_Assets_Regular = nullptr;
TTF_Font* Segoe_Print = nullptr;
TTF_Font* Segoe_UI = nullptr;
TTF_Font* Segoe_UI_Emoji_Regular = nullptr;
TTF_Font* Segoe_UI_Historic_Regular = nullptr;
TTF_Font* Segoe_UI_Symbol_Regular = nullptr;
TTF_Font* Segoe_WP = nullptr;
TTF_Font* Showcard_Gothic_Regular = nullptr;
TTF_Font* Sitka_Banner = nullptr;
TTF_Font* Sitka_Display = nullptr;
TTF_Font* Sitka_Heading = nullptr;
TTF_Font* Sitka_Small = nullptr;
TTF_Font* Sitka_Subheading = nullptr;
TTF_Font* Sitka_Text = nullptr;
TTF_Font* Small_Fonts_Regular = nullptr;
TTF_Font* Snap_ITC_Regular = nullptr;
TTF_Font* Stencil_Regular = nullptr;
TTF_Font* Sylfaen_Regular = nullptr;
TTF_Font* Symbol_Regular = nullptr;
TTF_Font* System_Bold = nullptr;
TTF_Font* Tahoma = nullptr;
TTF_Font* Tempus_Sans_ITC_Regular = nullptr;
TTF_Font* Terminal = nullptr;
TTF_Font* Times_New_Roman = nullptr;
TTF_Font* Trebuchet_MS = nullptr;
TTF_Font* Tw_Cen_Mt = nullptr;
TTF_Font* Verdana = nullptr;
TTF_Font* Viner_Hand_ITC_Regular = nullptr;
TTF_Font* Vivaldi_Italic = nullptr;
TTF_Font* Vladimir_Scripta_Regular = nullptr;
TTF_Font* Webdings_Regular = nullptr;
TTF_Font* Wibdings_2_Regular = nullptr;
TTF_Font* Wibdings_3_Regular = nullptr;
TTF_Font* Wingdings_Regular = nullptr;

SDL_Colour TextColour;
SDL_Surface* TextSurface = nullptr;
SDL_Texture* TextTexture = nullptr;

int RenderText::Init()
{
	if (TTF_Init() != 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void RenderText::Load()
{
	CalibriFont = TTF_OpenFont("Fonts/Calibri.ttf", 82);
	Agency_FB = TTF_OpenFont("Fonts/AGENCYBR.ttf", 82);
	Agency_FBBold = TTF_OpenFont("Fonts/AGENCYB.ttf", 82); 
	Algerian_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Arial = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Arial_Rounded_MT_Bold = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Bahnschrift = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Baskerville_Old_Face_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Bauhaus_93_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Bell_MT = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Berlin_Sans_FB = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Bernard_MT_Condensed = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Black_ITC_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Bodoni_MT = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Bodoni_MT_Poster_Compressed_Light = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Book_Antiqua = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Bookman_Old_Style = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Bookshelf_Symbol_7_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Bradley_Hand_ITC_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Britannic_Bold = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Broadway_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Brush_Script_MT_Italic = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Californian_FB = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Calisto_MT = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Cambria = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Cambria_Math_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Candara = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Castellar_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Centaur_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Century_Gothic = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Century_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Century_SchoolBook = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Chiller_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Colonna_MT_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Comic_Sans_MT = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Consolas = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Constantia = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Cooper_Black = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Copperplate_Gothic = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Corbel = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Courier_New = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Courier_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Curlz_MT_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Ebrima = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Edwardian_Script_ITC_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Elephant = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Engravers_MT_Expanded_Medium = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Eras_ITC = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Felix_Titling_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Fixedsys_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Footlight_MT_Light = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Forte_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Franklin_Gothic = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Franklin_Gothic_Book = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Freestyle_Script_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	French_Script_MT_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Gabriola_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Gadugi = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Garamond = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Georgia = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Gigi_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Gill_Sans = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Gill_Sans_MT = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Gloucester_MT_Extra_Condesnsed = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Goudy_Old_Style = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Goudy_Stout_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Haettenschweiler_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Harlow_Soid_Semi_Expanded_Italic = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Harrington_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	High_Tower_Text = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Hololens_MDL2_Assets_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Impact_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Imprint_MT_Shadow_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Informal_Roman_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Ink_Free_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Jokerman_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Juice_ITC_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Kristen_ITC_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Kunstler_Script_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Latin_Wide = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Lucida_Bright = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Lucidia_Calligraphy_Italic = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Lucidia_Console_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Lucidia_Fax = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Lucidia_Handwriting_Italic = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Lucidia_Sans = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Lucidia_Sans_TypeWriter = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Lucidia_Sans_Unicode_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Magneto_Bold = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Maiandra_GD_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Malgun_Gothic = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Matura_MT_Script_Capitals_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Mistral_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	//Modern_Number_20 = nullptr;
	Modern_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Monotype_Corsiva_Italic = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	MS_Reference_sans_Serif_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	MS_Sans_Serif_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	MS_Serif_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Niagara_Engraved_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Niagara_Solid_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Nirmala_UI = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	OCR_A_Extended = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Old_English_Text_MT_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Onyx_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Palace_Sript_MT_Italic = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Palatino_Linotype = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Papryrus_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Perpetua = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Perpetua_Titling_MT = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Playbill_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Pristina_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Rage_Italic = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Ravie_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Rockwell = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Roman_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Script_MT_Bold = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Script_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Segoe_MDL2_Assets_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Segoe_Print = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Segoe_UI = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Segoe_UI_Emoji_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Segoe_UI_Historic_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Segoe_UI_Symbol_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Segoe_WP = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Showcard_Gothic_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Sitka_Banner = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Sitka_Display = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Sitka_Heading = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Sitka_Small = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Sitka_Subheading = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Sitka_Text = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Small_Fonts_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Snap_ITC_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Stencil_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Sylfaen_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Symbol_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	System_Bold = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Tahoma = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Tempus_Sans_ITC_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Terminal = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Times_New_Roman = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Trebuchet_MS = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Tw_Cen_Mt = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Verdana = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Viner_Hand_ITC_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Vivaldi_Italic = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Vladimir_Scripta_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Webdings_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Wibdings_2_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Wibdings_3_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	Wingdings_Regular = TTF_OpenFont("Fonts/AGENCYB.ttf", 82);
	TextColour.r = 255;
	TextColour.g = 255;
	TextColour.b = 255;
	TextColour.a = 255;
}

SDL_Texture* RenderText::CreateNewTexture(const char* Text, SDL_Rect TextRect, const char* Font)
{
	TextSurface = TTF_RenderText_Blended(CalibriFont, Text, TextColour);
	TextTexture = SDL_CreateTextureFromSurface(Init::Renderer, TextSurface);
	SDL_QueryTexture(TextTexture, nullptr, nullptr, &TextRect.w, &TextRect.h);
	SDL_FreeSurface(TextSurface);

	return TextTexture;
}

void RenderText::Draw(SDL_Texture* Texture, SDL_Rect TextRect)
{
	
	SDL_RenderCopy(Init::Renderer, Texture, 0, &TextRect);
}

void RenderText::Clean()
{
	TTF_CloseFont(CalibriFont);
	SDL_DestroyTexture(TextTexture);
	TTF_Quit();
}

