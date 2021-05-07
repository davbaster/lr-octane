Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=90", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://i.ytimg.com/vi/FtSd844cI7U/mqdefault.jpg?sqp=-oaymwEECHwQRg&rs=AMzJL3lw-i8sPNFf4dgkF3f8o7jUMhZIIQ", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://i.ytimg.com/vi/DXUAyRRkI6k/mqdefault.jpg?sqp=-oaymwEECHwQRg&rs=AMzJL3lRkCjPY_l8ofLf6ISMlP_O1-LCNA", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://i.ytimg.com/vi/gNTDoOmc1OQ/mqdefault.jpg?sqp=-oaymwEECHwQRg&rs=AMzJL3kDU5YvKior09vnHS7rtmLVC6AqJA", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://i.ytimg.com/vi/hY7m5jjJ9mM/mqdefault.jpg?sqp=-oaymwEECHwQRg&rs=AMzJL3nAwuQcMmWN-geP5s9-7lSnT8levA", "Referer=https://www.google.com/", ENDITEM, 
		LAST);

	return 0;
}