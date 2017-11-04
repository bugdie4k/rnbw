#ifndef RNBW_CLRS_H_INCLUDED
#define RNBW_CLRS_H_INCLUDED

#include <string>
#include <sstream>

struct rgb_t {
     unsigned r, g, b;
};

rgb_t hex2rgb(std::string s);

std::string rgb2hex(rgb_t rgb);

std::string rgb2hex(unsigned r, unsigned g, unsigned b);

int colornum_from_colorname(std::string name);

std::string colorname_from_colornum(unsigned num);

struct clr_t {
     std::string name;
     std::string simpler_name;
     std::string rgb;
};

const clr_t colors[256] = {
    {"black", "", "000000"},
    {"red", "", "ff0000"},
    {"green", "", "008000"},
    {"yellow", "", "808000"},
    {"blue", "", "000080"},
    {"magenta", "", "800080"},
    {"cyan", "", "008080"},
    {"light-gray", "", "c0c0c0"},
    {"dark-gray", "", "808080"},
    {"light-red", "", "ff0000"},
    {"light-green", "", "00ff00"},
    {"light-yellow", "", "ffff00"},
    {"light-blue", "", "0000ff"},
    {"light-magenta", "", "ff00ff"},
    {"light-cyan", "", "00ffff"},
    {"white", "", "ffffff"},
    {"grey-0", "", "000000"},
    {"navy-blue", "", "00005f"},
    {"dark-blue", "", "000087"},
    {"blue-3a", "", "0000af"},
    {"blue-3b", "", "0000d7"},
    {"blue-1", "", "0000ff"},
    {"dark-green", "", "005f00"},
    {"deep-sky-blue-4a", "", "005f5f"},
    {"deep-sky-blue-4b", "", "005f87"},
    {"deep-sky-blue-4c", "", "005faf"},
    {"dodger-blue-3", "", "005fd7"},
    {"dodger-blue-2", "", "005fff"},
    {"green-4", "", "008700"},
    {"spring-green-4", "", "00875f"},
    {"turquoise-4", "", "008787"},
    {"deep-sky-blue-3a", "", "0087af"},
    {"deep-sky-blue-3b", "", "0087d7"},
    {"dodger-blue-1", "dodger-blue", "0087ff"},
    {"green-3a", "", "00af00"},
    {"spring-green-3a", "", "00af5f"},
    {"dark-cyan", "", "00af87"},
    {"light-sea-green", "", "00afaf"},
    {"deep-sky-blue-2", "", "00afd7"},
    {"deep-sky-blue-1", "deep-sky-blue", "00afff"},
    {"green-3b", "", "00d700"},
    {"spring-green-3b", "", "00d75f"},
    {"spring-green-2a", "", "00d787"},
    {"cyan-3", "", "00d7af"},
    {"dark-turquoise", "", "00d7d7"},
    {"turquoise-2", "turquoise", "00d7ff"},
    {"green-1", "", "00ff00"},
    {"spring-green-2b", "", "00ff5f"},
    {"spring-green-1", "spring-green", "00ff87"},
    {"medium-spring-green", "", "00ffaf"},
    {"cyan-2", "", "00ffd7"},
    {"cyan-1", "", "00ffff"},
    {"dark-red-1", "dark-red", "5f0000"},
    {"deep-pink-4a", "", "5f005f"},
    {"purple-4a", "", "5f0087"},
    {"purple-4b", "", "5f00af"},
    {"purple-3", "", "5f00d7"},
    {"blue-violet", "", "5f00ff"},
    {"orange-4a", "", "5f5f00"},
    {"grey-37", "", "5f5f5f"},
    {"medium-purple-4", "", "5f5f87"},
    {"slate-blue-3a", "slate-blue", "5f5faf"},
    {"slate-blue-3b", "", "5f5fd7"},
    {"royal-blue-1", "royal-blue", "5f5fff"},
    {"chartreuse-4", "", "5f8700"},
    {"dark-sea-green-4a", "", "5f875f"},
    {"pale-turquoise-4", "", "5f8787"},
    {"steel-blue", "", "5f87af"},
    {"steel-blue-3", "", "5f87d7"},
    {"cornflower-blue", "", "5f87ff"},
    {"chartreuse-3a", "", "5faf00"},
    {"dark-sea-green-4b", "", "5faf5f"},
    {"cadet-blue-2", "", "5faf87"},
    {"cadet-blue-1", "cadet-blue", "5fafaf"},
    {"sky-blue-3", "", "5fafd7"},
    {"steel-blue-1a", "", "5fafff"},
    {"chartreuse-3b", "", "5fd700"},
    {"pale-green-3a", "", "5fd75f"},
    {"sea-green-3", "", "5fd787"},
    {"aquamarine-3", "", "5fd7af"},
    {"medium-turquoise", "", "5fd7d7"},
    {"steel-blue-1b", "", "5fd7ff"},
    {"chartreuse-2a", "", "5fff00"},
    {"sea-green-2", "", "5fff5f"},
    {"sea-green-1a", "", "5fff87"},
    {"sea-green-1b", "sea-green", "5fffaf"},
    {"aquamarine-1a", "aquamarine", "5fffd7"},
    {"dark-slate-gray-2", "", "5fffff"},
    {"dark-red-2", "", "870000"},
    {"deep-pink-4b", "", "87005f"},
    {"dark-magenta-1", "dark-magenta", "870087"},
    {"dark-magenta-2", "", "8700af"},
    {"dark-violet-1a", "dark-violet", "8700d7"},
    {"purple-1a", "", "8700ff"},
    {"orange-4b", "", "875f00"},
    {"light-pink-4", "", "875f5f"},
    {"plum-4", "", "875f87"},
    {"medium-purple-3a", "", "875faf"},
    {"medium-purple-3b", "", "875fd7"},
    {"slate-blue-1", "", "875fff"},
    {"yellow-4a", "", "878700"},
    {"wheat-4", "", "87875f"},
    {"grey-53", "", "878787"},
    {"light-slate-grey", "", "8787af"},
    {"medium-purple", "", "8787d7"},
    {"light-slate-blue", "", "8787ff"},
    {"yellow-4b", "", "87af00"},
    {"dark-olive-green-3a", "dark-olive-green", "87af5f"},
    {"dark-sea-green", "", "87af87"},
    {"light-sky-blue-3a", "", "87afaf"},
    {"light-sky-blue-3b", "", "87afd7"},
    {"sky-blue-2", "", "87afff"},
    {"chartreuse-2b", "", "87d700"},
    {"dark-olive-green-3b", "", "87d75f"},
    {"pale-green-3b", "", "87d787"},
    {"dark-sea-green-3a", "", "87d7af"},
    {"dark-slate-gray-3", "", "87d7d7"},
    {"sky-blue-1", "sky-blue", "87d7ff"},
    {"chartreuse-1", "chartreuse", "87ff00"},
    {"light-green-2", "", "87ff5f"},
    {"light-green-3", "", "87ff87"},
    {"pale-green-1a", "", "87ffaf"},
    {"aquamarine-1b", "", "87ffd7"},
    {"dark-slate-gray-1", "dark-slate-gray", "87ffff"},
    {"red-3a", "", "af0000"},
    {"deep-pink-4c", "", "af005f"},
    {"medium-violet-red", "", "af0087"},
    {"magenta-3a", "", "af00af"},
    {"dark-violet-1b", "", "af00d7"},
    {"purple-1b", "purple", "af00ff"},
    {"dark-orange-3a", "", "af5f00"},
    {"indian-red-1a", "indian-red", "af5f5f"},
    {"hot-pink-3a", "", "af5f87"},
    {"medium-orchid-3", "", "af5faf"},
    {"medium-orchid", "", "af5fd7"},
    {"medium-purple-2a", "", "af5fff"},
    {"dark-goldenrod", "", "af8700"},
    {"light-salmon-3a", "", "af875f"},
    {"rosy-brown", "", "af8787"},
    {"grey-63", "", "af87af"},
    {"medium-purple-2b", "", "af87d7"},
    {"medium-purple-1", "", "af87ff"},
    {"gold-3a", "", "afaf00"},
    {"dark-khaki", "", "afaf5f"},
    {"navajo-white-3", "", "afaf87"},
    {"grey-69", "", "afafaf"},
    {"light-steel-blue-3", "", "afafd7"},
    {"light-steel-blue", "", "afafff"},
    {"yellow-3a", "", "afd700"},
    {"dark-olive-green-3", "", "afd75f"},
    {"dark-sea-green-3b", "", "afd787"},
    {"dark-sea-green-2", "", "afd7af"},
    {"light-cyan-3", "", "afd7d7"},
    {"light-sky-blue-1", "light-sky-blue", "afd7ff"},
    {"green-yellow", "", "afff00"},
    {"dark-olive-green-2", "", "afff5f"},
    {"pale-green-1b", "pale-green", "afff87"},
    {"dark-sea-green-5b", "", "afffaf"},
    {"dark-sea-green-5a", "", "afffd7"},
    {"pale-turquoise-1", "pale-turquoise", "afffff"},
    {"red-3b", "", "d70000"},
    {"deep-pink-3a", "", "d7005f"},
    {"deep-pink-3b", "", "d70087"},
    {"magenta-3b", "", "d700af"},
    {"magenta-3c", "", "d700d7"},
    {"magenta-2a", "", "d700ff"},
    {"dark-orange-3b", "", "d75f00"},
    {"indian-red-1b", "", "d75f5f"},
    {"hot-pink-3b", "", "d75f87"},
    {"hot-pink-2", "", "d75faf"},
    {"orchid", "", "d75fd7"},
    {"medium-orchid-1a", "", "d75fff"},
    {"orange-3", "", "d78700"},
    {"light-salmon-3b", "light-salmon", "d7875f"},
    {"light-pink-3", "", "d78787"},
    {"pink-3", "", "d787af"},
    {"plum-3", "plum", "d787d7"},
    {"violet", "", "d787ff"},
    {"gold-3b", "", "d7af00"},
    {"light-goldenrod-3", "", "d7af5f"},
    {"tan", "", "d7af87"},
    {"misty-rose-3", "", "d7afaf"},
    {"thistle-3", "thistle", "d7afd7"},
    {"plum-2", "", "d7afff"},
    {"yellow-3b", "", "d7d700"},
    {"khaki-3", "", "d7d75f"},
    {"light-goldenrod-2a", "", "d7d787"},
    {"light-yellow-3", "", "d7d7af"},
    {"grey-84", "", "d7d7d7"},
    {"light-steel-blue-1", "", "d7d7ff"},
    {"yellow-2", "", "d7ff00"},
    {"dark-olive-green-1a", "", "d7ff5f"},
    {"dark-olive-green-1b", "", "d7ff87"},
    {"dark-sea-green-1", "", "d7ffaf"},
    {"honeydew-2", "honeydew", "d7ffd7"},
    {"light-cyan-1", "", "d7ffff"},
    {"red-1", "", "ff0000"},
    {"deep-pink-2", "deep-pink", "ff005f"},
    {"deep-pink-1a", "", "ff0087"},
    {"deep-pink-1b", "", "ff00af"},
    {"magenta-2b", "", "ff00d7"},
    {"magenta-1", "", "ff00ff"},
    {"orange-red-1", "orange-red", "ff5f00"},
    {"indian-red-1c", "", "ff5f5f"},
    {"indian-red-1d", "", "ff5f87"},
    {"hot-pink-1a", "hot-pink", "ff5faf"},
    {"hot-pink-1b", "", "ff5fd7"},
    {"medium-orchid-1b", "", "ff5fff"},
    {"dark-orange", "", "ff8700"},
    {"salmon-1", "salmon", "ff875f"},
    {"light-coral", "", "ff8787"},
    {"pale-violet-red-1", "pale-violet-red", "ff87af"},
    {"orchid-2", "", "ff87d7"},
    {"orchid-1", "", "ff87ff"},
    {"orange-1", "orange", "ffaf00"},
    {"sandy-brown", "", "ffaf5f"},
    {"light-salmon-1", "", "ffaf87"},
    {"light-pink-1", "light-pink", "ffafaf"},
    {"pink-1", "pink", "ffafd7"},
    {"plum-1", "", "ffafff"},
    {"gold-1", "gold", "ffd700"},
    {"light-goldenrod-2b", "", "ffd75f"},
    {"light-goldenrod-2c", "", "ffd787"},
    {"navajo-white-1", "navajo-white", "ffd7af"},
    {"misty-rose-1", "misty-rose", "ffd7d7"},
    {"thistle-1", "", "ffd7ff"},
    {"yellow-1", "", "ffff00"},
    {"light-goldenrod-1", "light-goldenrod", "ffff5f"},
    {"khaki-1", "khaki", "ffff87"},
    {"wheat-1", "wheat", "ffffaf"},
    {"cornsilk-1", "cornsilk", "ffffd7"},
    {"grey-100", "", "ffffff"},
    {"grey-3", "", "080808"},
    {"grey-7", "", "121212"},
    {"grey-11", "", "1c1c1c"},
    {"grey-15", "", "262626"},
    {"grey-19", "", "303030"},
    {"grey-23", "", "3a3a3a"},
    {"grey-27", "", "444444"},
    {"grey-30", "grey", "4e4e4e"},
    {"grey-35", "", "585858"},
    {"grey-39", "", "626262"},
    {"grey-42", "", "6c6c6c"},
    {"grey-46", "", "767676"},
    {"grey-50", "", "808080"},
    {"grey-54", "", "8a8a8a"},
    {"grey-58", "", "949494"},
    {"grey-62", "", "9e9e9e"},
    {"grey-66", "", "a8a8a8"},
    {"grey-70", "", "b2b2b2"},
    {"grey-74", "", "bcbcbc"},
    {"grey-78", "", "c6c6c6"},
    {"grey-82", "", "d0d0d0"},
    {"grey-85", "", "dadada"},
    {"grey-89", "", "e4e4e4"},
    {"grey-93", "", "eeeeee"},
};

#endif // RNBW_CLRS_H_INCLUDED