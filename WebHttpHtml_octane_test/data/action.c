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
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_add_cookie("CONSENT=YES+IE.en+V9+BX; DOMAIN=www.google.com");

	web_add_cookie("NID=209=sh_UK3TjjS3ciBLgzygV1jVsX1zRwxKRnQ-bSAtCHE3J7zkIYTElPlAUoZJgNslgbowRbmLui7kX87bb46xtbn-ttiXfkwHWrEr3vvEGLJnVNgyyLtE6SZlyyZ8LsaGpZqtbe1fdI_tlB94FISY8cTXGAWlT37ToiNbB5vVDypg; DOMAIN=www.google.com");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.google.com", 
		"URL=http://www.google.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChNDaHJvbWUvOTAuMC40NDMwLjkzEhAJ9dVUO7IApPESBQ1pSEdH?alt=proto", "Referer=", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTHY2D1_Fe5dnns_rulBDvzV6B9UXt4067guI4BKP8&s=10", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcR7zHBCyMzjCh5BOAXTsQVI-sGc60YzQ75_jCvjB7Y&s=10", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRHc-_daLHkgWkUAxfVhCzcvBitHx_i5ioqEQryNg0&s=10", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSyiWP_Q0UaCGJT7guzkh7WIrVaqI_O6jbITs6o92g&s=10", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSi-z4JCBX2Y_V_nwuxTcdkgUXBodiQUHYzmXqJnVM&s=10", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRSDohQRyvKuCJoX35sXPxZXb-cftKkgj5eUnUenRQ&s=10", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQR1jju1tcEqsQ3wQqNF0lqkxPcpF9rRbgSJxNKgHyV_p9LoI8rlHIYptA&s=10", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSS-V3h1A5YiuwuuNnlTaFRiPw1xMMAQwg0-4NtxJ4BHBPaDc4xVQsNrYU&s=10", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSq4ywMwIQDk20o3L70KG50NUgNJxPXQo2pRy3d_VjRZCQlXwIpRk8qwfU&s=10", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRCdISgGwZHjL2KU6fvwVG6ZqEC9krJBAyitnS77bSsXEk1Y8OWKnl0Krg&s=10", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTbyXUq8aeyfeBPS4033oz9RfLYJ4HKgIAULNLFyHM&s=10", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcR8oeU0O8P0XxwTwEGNCXzh27dpx0TJOUPB6YbFQukrQKnhUDSEBbdz6l0&s=10", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTPw9n400lA3gK3kKVUUWoKt8U0YyTmIApb9EmKNAU&s=10", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQJDX3J1cgiFTB3d_U6QODc3--36IIh3L16GtgarxUD6IX2VRSLyDn1_Zg&s=10", "Referer=https://www.google.com/", ENDITEM, 
		LAST);

	web_add_cookie("CONSENT=YES+IE.en+V9+BX; DOMAIN=adservice.google.com");

	web_add_cookie("NID=209=sh_UK3TjjS3ciBLgzygV1jVsX1zRwxKRnQ-bSAtCHE3J7zkIYTElPlAUoZJgNslgbowRbmLui7kX87bb46xtbn-ttiXfkwHWrEr3vvEGLJnVNgyyLtE6SZlyyZ8LsaGpZqtbe1fdI_tlB94FISY8cTXGAWlT37ToiNbB5vVDypg; DOMAIN=adservice.google.com");

	web_add_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_add_header("X-Client-Data", 
		"CJW2yQEIorbJAQjBtskBCKmdygEI+MfKAQiS/8oBCOOcywEIqZ3LAQigoMsBCN/vywEI3PLLARiOnssB");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("ui", 
		"URL=https://adservice.google.com/adsid/google/ui", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Purpose", 
		"prefetch");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_cookie("fr=01q5NertZUls8vdGW..BfzqtB...1.0.BgNRED.; DOMAIN=www.facebook.com");

	web_add_cookie("_ga=GA1.2.1127036404.1620419546; DOMAIN=www.nacion.com");

	web_add_cookie("_gid=GA1.2.783827595.1620419547; DOMAIN=www.nacion.com");

	web_add_cookie("_dc_gtm_UA-1513600-1=1; DOMAIN=www.nacion.com");

	web_add_cookie("gckp=3e2hjc64kl1v8tiif68tqxsuw; DOMAIN=id.cxense.com");

	web_add_cookie("cX_T=koerynuwlehp1kab; DOMAIN=id.cxense.com");

	web_add_cookie("expiretoken=; DOMAIN=id.cxense.com");

	web_add_cookie("_fbp=fb.1.1620419548484.377029468; DOMAIN=www.nacion.com");

	web_add_cookie("pg_session_depth=1; DOMAIN=www.nacion.com");

	web_add_cookie("_vfb=www%2Enacion%2Ecom.00000000-0000-4000-8000-06c44884a6d1.1.10.1620419550....; DOMAIN=www.nacion.com");

	web_add_cookie("_vfz=www%2Enacion%2Ecom.00000000-0000-4000-8000-06c44884a6d1.1620419550.1.medium=referral|source=https%3A%2F%2Fwww%2Egoogle%2Ecom%2F|sharer_uuid=|terms=; DOMAIN=www.nacion.com");

	web_add_cookie("_vfa=www%2Enacion%2Ecom.00000000-0000-4000-8000-06c44884a6d1.94d1110c-9aad-4385-ade2-d43d8c218b8e.1620419550.1620419550.1620419550.1; DOMAIN=www.nacion.com");

	web_add_cookie("pg_geo={\"country\":\"IE\",\"region\":\"L\",\"ip\":\"3.250.8.11\"}; DOMAIN=www.nacion.com");

	web_add_cookie("pg_custom_timeout=; DOMAIN=www.nacion.com");

	web_add_cookie("pg_ip=3.250.8.11; DOMAIN=www.nacion.com");

	web_add_cookie("pg_analytics=disabled; DOMAIN=www.nacion.com");

	web_add_cookie("__tbc=%7Bjzx%7DhqPxWBamX8F22_WiB3FD03dpTR0ZZJLqMpbF-m1ye47vvavIykrjnWumSYDFYXOcAnmFOqjOWcan9NvL_as08xlzWEyXzdQ1AVfmU2YVprrRnnfLxODbJPfGiQM8FPZs-j03px0uVcUBUL3h8SpYTQ; DOMAIN=www.nacion.com");

	web_add_cookie("__pat=-21600000; DOMAIN=www.nacion.com");

	web_add_cookie("__pvi=%7B%22id%22%3A%22v-2021-05-07-20-32-29-355-CP5HswLYb0UYpg6q-8cb83c76f4f6e08bcd171d249be732e5%22%2C%22domain%22%3A%22.nacion.com%22%2C%22time%22%3A1620419550527%7D; DOMAIN=www.nacion.com");

	web_add_cookie("xbc="
		"%7Bjzx%7DmFa1INVIwlhdEYOw09tOI2axi6rCNK9V_xcHvA5MmwYnn0fpUGkYLAwWRPKGuKys5zjbY-tQxeXsfCu6zARKpSiOWouAClIXCB0rGO_Ioguu0KAWmLnoz9NXmIMI7IHlazwxPHOhmODmcEg_mwTz4-SovmcR8LXiTKM_2GbrujybiqB55WuLy9I53PKd1flVeQYgBQldY_Eeo_jREiGrhth7sTC88cU4tbgV072aXQKspOCK1KJJ3b8jRAjOvpt0oAiRtvN_6bC91zdZObqOvEA4Jz-qoz4Cxh6ZszPbYFlUzp3Q55aEOCN0wWCGUHQ6odadKMb5Fo5k3L2qwv14mphDvXbm7oozdyhEBo4x-J3WgVMcK9qtWQh22Ewul-RoTtGXoHla5NSHXoXgGccjRtm0-XgE3KGQ97Hor6yva-LVVTDhoHSl0M7h0rnd8288YoYtorHuaXQ6YgS-62LPoBQPDQ-gm9v_n9eC3X2ijPXU0"
		"XZrkin4J8UNwBMcMVPPb0wiQAYicfBAnmsVXyvSQ5xL18NlEGQp6ccvj_t2hcSJ9gVTUzbuWUZvIzFLBC44wM_CH_X7RnMaVOc33bk51_m3PTmANk8Hf10vF7IwCr2XtrymaLX3VlfQk796dkrD; DOMAIN=www.nacion.com");

	web_url("www.nacion.com", 
		"URL=https://www.nacion.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://s.go-mpulse.net/boomerang/MUS2S-CNA8N-ZZLSU-SW4QW-8FUKY", ENDITEM, 
		"Url=https://cdn.onesignal.com/sdks/OneSignalPageSDKES6.js?v=151501", ENDITEM, 
		"Url=https://www.googletagmanager.com/gtm.js?id=GTM-TSFC2S", ENDITEM, 
		"Url=https://scdn.cxense.com/cx.js", ENDITEM, 
		"Url=https://connect.facebook.net/en_US/sdk.js", ENDITEM, 
		"Url=https://api.tinypass.com/xbuilder/experience/load?aid=BM6tVBSjXE", ENDITEM, 
		"Url=https://static.chartbeat.com/js/chartbeat.js", ENDITEM, 
		"Url=https://static.chartbeat.com/js/chartbeat_mab.js", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=https://m2d.m2.ai/pg.nacion.com.js", ENDITEM, 
		"Url=https://www.facebook.com/tr/?id=816768665036726&ev=PixelInitialized&dl=https%3A%2F%2Fwww.nacion.com%2F&rl=https%3A%2F%2Fwww.google.com%2F&if=false&ts=1620419545500", ENDITEM, 
		"Url=https://onesignal.com/api/v1/sync/a9149a36-9cfd-4ab7-bbdf-8ab6a1ee52be/web?callback=__jp0", ENDITEM, 
		"Url=https://api.cxense.com/profile/user/segment?callback=cXJsonpCBkoeryjbtd74gwxer&persisted=b15320daa6193bf072303805114e1600484395c8&json=%7B%22identities%22%3A%5B%7B%22id%22%3A%22koeryjbphz53fdla%22%2C%22type%22%3A%22cx%22%7D%5D%7D", ENDITEM, 
		"Url=https://www.facebook.com/tr/?id=816768665036726&ev=PageView&dl=https%3A%2F%2Fwww.nacion.com%2F&rl=https%3A%2F%2Fwww.google.com%2F&if=false&ts=1620419545500", ENDITEM, 
		"Url=/resizer/FmbSrUFz1YDB9raZKEuNUznSN7E=/480x320/center/top/filters:quality(100)/cloudfront-us-east-1.images.arcpublishing.com/gruponacion/H4VT2PF66JGMRNFLXTJDYZOTXA.jpg", ENDITEM, 
		"Url=/resizer/uHlTR7iXybYJnYEEpQeWyRgYTdA=/480x320/center/top/filters:quality(100)/cloudfront-us-east-1.images.arcpublishing.com/gruponacion/HBKUFDB6CVD65D5O7WWZO67HGE.jpg", ENDITEM, 
		"Url=https://api.cxense.com/profile/user/segment?callback=cXJsonpCBkoeryjc1wo6ywsgk&persisted=b15320daa6193bf072303805114e1600484395c8&json=%7B%22identities%22%3A%5B%7B%22id%22%3A%22koeryjbphz53fdla%22%2C%22type%22%3A%22cx%22%7D%5D%7D", ENDITEM, 
		"Url=/resizer/ubFSFGjEQMet9hny-ynUuj6iP2I=/480x320/center/top/filters:quality(100)/cloudfront-us-east-1.images.arcpublishing.com/gruponacion/3WMYKUENVBAE7M2REQSDVNDKSA.png", ENDITEM, 
		"Url=/resizer/g08QhhePKI_rLfgonL8ghj-pN-o=/480x320/center/top/filters:quality(100)/cloudfront-us-east-1.images.arcpublishing.com/gruponacion/5ZNYRSLEHBHAJDT6D5FK7QJHBM.png", ENDITEM, 
		"Url=https://cdn.viafoura.net/chunks/vendors~languages/intl-messageformat.90484bbd11a18be65b1d.js", ENDITEM, 
		"Url=/resizer/AkjSWtuPy5Y8tLca1Lfxj6UQaGo=/320x0/center/middle/filters:quality(100)/cloudfront-us-east-1.images.arcpublishing.com/gruponacion/DMMYDF46CNBL7P3DCWHBGQBPGQ.jpg", ENDITEM, 
		"Url=/resizer/Dr6HkeC8hFnfY6qG94g6hcfwgyE=/320x0/center/middle/filters:quality(100)/cloudfront-us-east-1.images.arcpublishing.com/gruponacion/QWD6G3PQUNEH7GSCDVSUGJVSFI.jpeg", ENDITEM, 
		"Url=/resizer/syJKpjML3soDqnegxcIVLk236aw=/320x0/center/middle/filters:quality(100)/cloudfront-us-east-1.images.arcpublishing.com/gruponacion/W3WK4HFZJZFEDPU6ALVPGFMPE4.jpg", ENDITEM, 
		"Url=https://cdn.tinypass.com/api/tinypass.min.js", ENDITEM, 
		"Url=https://cdn.viafoura.net/chunks/languages/intl-messageformat.faa4eb52d28c991a728b.js", ENDITEM, 
		"Url=https://ping.chartbeat.net/ping?h=nacion.com&p=%2F&u=CHrX6QCGdZzDBihEwB&d=nacion.com&g=45503&g0=Sin%20seccion&g1=Sin%20autor&n=1&f=00001&c=0&x=0&m=0&y=8528&o=1249&w=601&j=45&R=1&W=0&I=0&E=0&e=0&r=https%3A%2F%2Fwww.google.com%2F&b=3631&t=Bu7fFvBdG42OBAgDYDCtPhlkBYfFPv&V=126&i=Noticias%20de%20Costa%20Rica%20-%20La%20Naci%C3%B3n&tz=0&_acct=anon&sn=1&sv=DxhkT5DDJn2BC79bTxCfdLZhzIlU4&sr=https%3A%2F%2Fwww.google.com%2F&sd=1&im=067b07ff&_", ENDITEM, 
		"Url=https://cdn.viafoura.net/chunks/languages/es-es-base-json.7b918bb75d10b905f3bb.js", ENDITEM, 
		"Url=https://securepubads.g.doubleclick.net/tag/js/gpt.js", ENDITEM, 
		"Url=https://cdn.pubguru.com/flags/en.png", ENDITEM, 
		"Url=https://cdn.pubguru.com/flags/bg.png", ENDITEM, 
		"Url=https://cdn.pubguru.com/flags/da.png", ENDITEM, 
		"Url=https://cdn.pubguru.com/flags/de.png", ENDITEM, 
		"Url=https://cdn.pubguru.com/flags/es.png", ENDITEM, 
		"Url=https://cdn.pubguru.com/flags/nl.png", ENDITEM, 
		"Url=https://buy.tinypass.com/api/v3/anon/captcha/get.js?callback=jsonpCallback&aid=BM6tVBSjXE", ENDITEM, 
		"Url=https://i.viafoura.co/v3/www.nacion.com/ingest?t="
		"%7B%22view%22%3A%7B%22domain%22%3A%22www.nacion.com%22%2C%22siteUuid%22%3A%2200000000-0000-4000-8000-06c44884a6d1%22%2C%22pageViews%22%3A1%2C%22outgoing%22%3A10%2C%22sessionStart%22%3A1620419550%2C%22isRecirculation%22%3Afalse%2C%22referrerStart%22%3A1620419550%2C%22refVisitCount%22%3A1%2C%22ref%22%3A%7B%22medium%22%3A%22referral%22%2C%22source%22%3A%22https%3A%2F%2Fwww.google.com%2F%22%2C%22sharer_uuid%22%3A%22%22%2C%22terms%22%3A%22%22%7D%2C%22uniqueId%22%3A%2294d1110c-9aad-4385-ade2-d43d8c218b8"
		"e%22%2C%22firstVisit%22%3A1620419550%2C%22previousVisit%22%3A1620419550%2C%22currentVisit%22%3A1620419550%2C%22visitCount%22%3A1%7D%2C%22meta%22%3A%7B%22domain%22%3A%22www.nacion.com%22%2C%22site%22%3A%2200000000-0000-4000-8000-06c44884a6d1%22%2C%22section%22%3A%2200000000-0000-4000-8000-06c44884a6d1%22%2C%22pageImage%22%3A%22%2Fpb%2Fresources%2Fassets%2Fimg%2Ffallback-promo-image.png%3Ftoken%3D20170403_001%22%2C%22ref%22%3A%7B%7D%2C%22vf%22%3Afalse%2C%22url%22%3A%22https%3A%2F%2Fwww.nacion.com%2F"
		"%22%2C%22path%22%3A%22%2F%22%2C%22title%22%3A%22Noticias%20de%20Costa%20Rica%20-%20La%20Naci%C3%B3n%22%2C%22privilege%22%3A%22guest%22%2C%22page_description%22%3A%22Noticias%20de%20Costa%20Rica%20y%20el%20mundo%3A%20pol%C3%ADtica%2C%20econom%C3%ADa%2C%20deportes%2C%20ciencia%20y%20cultura%2C%20entre%20otros%20temas.%22%2C%22topics%22%3A%5B%5D%2C%22git%22%3A%22665016d3f92989d9c401e926f49bd1990eb7f0e1%22%2C%22amp%22%3Afalse%2C%22thirdparty_enabled%22%3Atrue%7D%2C%22ua%22%3A%7B%22nl%22%3A%22en-US%22%"
		"2C%22nu%22%3A%22Mozilla%2F5.0%20(Windows%20NT%206.3%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F90.0.4430.93%20Safari%2F537.36%22%2C%22sr%22%3A%221266x712%22%2C%22sd%22%3A24%2C%22vp%22%3A%221266x601%22%2C%22dt%22%3A%22Noticias%20de%20Costa%20Rica%20-%20La%20Naci%C3%B3n%22%2C%22de%22%3A%22UTF-8%22%2C%22dl%22%3Anull%7D%2C%22rq%22%3A%22def9fd28-ff9f-4e79-96be-d0fb5513e21b%22%2C%22rs%22%3A0%2C%22w%22%3A%5B%5D%2C%22v%22%3A5%2C%22event_type%22%3A%22analytics.view%22%7D", ENDITEM, 
		"Url=https://cdn.pubguru.com/flags/fr.png", ENDITEM, 
		"Url=https://cdn.pubguru.com/flags/no.png", ENDITEM, 
		"Url=https://cdn.pubguru.com/flags/fi.png", ENDITEM, 
		"Url=https://cdn.pubguru.com/flags/pt.png", ENDITEM, 
		"Url=https://cdn.pubguru.com/flags/ro.png", ENDITEM, 
		"Url=https://cdn.pubguru.com/flags/sr.png", ENDITEM, 
		"Url=https://cdn.pubguru.com/flags/sv.png", ENDITEM, 
		"Url=https://cdn.pubguru.com/flags/pl.png", ENDITEM, 
		"Url=https://cdn.pubguru.com/flags/it.png", ENDITEM, 
		"Url=https://cdn.pubguru.com/Spinner-1s-200px.gif", ENDITEM, 
		"Url=https://pagead2.googlesyndication.com/pagead/show_companion_ad.js", ENDITEM, 
		"Url=https://id.cxense.com/public/user/id?json=%7B%22identities%22%3A%5B%7B%22type%22%3A%22ckp%22%2C%22id%22%3A%22koeryjbphz53fdla%22%7D%2C%7B%22type%22%3A%22lst%22%2C%22id%22%3A%222r0yzlyl8dqyq20gu3ymwix2tp%22%7D%2C%7B%22type%22%3A%22cst%22%2C%22id%22%3A%222r0yzlyl8dqyq20gu3ymwix2tp%22%7D%5D%2C%22siteId%22%3A%221127341995055146355%22%2C%22location%22%3A%22https%3A%2F%2Fwww.nacion.com%2F%22%7D&callback=cXJsonpCBkoerynwcvloa84id", ENDITEM, 
		"Url=/pb/resources/favicon.ico?token=20170403_001", ENDITEM, 
		"Url=/manifest.json", ENDITEM, 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("l", 
		"URL=https://translate.googleapis.com/translate_a/l?client=chrome&hl=en&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.nacion.com/pb/resources/gncomun/global/gn-header-top-nav/img/menu.svg", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		"Url=https://www.nacion.com/pb/resources/gncomun/global/gn-header-top-nav/img/buscador.svg", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		"Url=https://www.nacion.com/pb/resources/gncomun/ads-dfp-jquery/ad-unit-slot/publicidad.png", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		"Url=https://www.nacion.com/pb/resources/gncomun/global/gn-header-top-nav/img/usuario.svg", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		"Url=https://www.nacion.com/gnfactory/comercial/todobusco/banner-ln/todobusco_300x140_secciones.jpg", "Referer=https://www.nacion.com/gnfactory/comercial/todobusco/banner-ln/banner-todobusco.html", ENDITEM, 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"https://www.nacion.com");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("v2", 
		"URL=https://api.viafoura.co/v2/www.nacion.com/bootstrap/v2", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/plain charset=utf-8", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Origin");

	web_add_cookie("RT=\"z=1&dm=nacion.com&si=ve8nfcg6hfo&ss=koerygzd&sl=0&tt=0\"; DOMAIN=www.nacion.com");

	web_websocket_connect("ID=0", 
		"URI=wss://sub.viafoura.co/", 
		"Origin=https://www.nacion.com", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_add_cookie("RT=\"z=1&dm=nacion.com&si=4ib4ud50t9b&ss=koerygzd&sl=0&tt=0\"; DOMAIN=www.nacion.com");

	web_add_auto_header("Origin", 
		"https://www.nacion.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("config.json", 
		"URL=https://c.go-mpulse.net/api/config.json?key=MUS2S-CNA8N-ZZLSU-SW4QW-8FUKY&d=www.nacion.com&t=5401398&v=1.632.0&if=&sl=0&si=ve8nfcg6hfo-qsr7py&plugins=AK,ConfigOverride,Continuity,PageParams,IFrameDelay,AutoXHR,SPA,Angular,Backbone,Ember,History,RT,CrossDomain,BW,PaintTiming,NavigationTiming,ResourceTiming,Memory,CACHE_RELOAD,Errors,TPAnalytics,UserTiming,Akamai,LOGN&acao=&ak.ai=642718", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.nacion.com/pb/resources/gncomun/global/gn-header-top-nav/img/inicio.svg", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		"Url=https://www.nacion.com/pb/resources/assets/la_nacion/img/ico_video_black.svg", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		"Url=https://www.nacion.com/pb/resources/assets/la_nacion/img/ico_video.png", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		"Url=https://www.nacion.com/pb/resources/assets/la_nacion/img/starblue.svg", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		LAST);

	web_add_cookie("_gcl_au=1.1.714464651.1620419545; DOMAIN=www.nacion.com");

	web_custom_request("v2_2", 
		"URL=https://api.viafoura.co/v2/www.nacion.com/bootstrap/v2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"section\":\"\"}", 
		EXTRARES, 
		"Url=https://www.nacion.com/pb/resources/assets/la_nacion/img/sections/logo_lndata.png", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		LAST);

	web_add_cookie("cX_T=koeryixdo0jatqp1; DOMAIN=www.nacion.com");

	web_url("config.json_2", 
		"URL=https://c.go-mpulse.net/api/config.json?key=MUS2S-CNA8N-ZZLSU-SW4QW-8FUKY&d=www.nacion.com&t=5401398&v=1.632.0&if=&sl=0&si=4ib4ud50t9b-qsr7py&plugins=AK,ConfigOverride,Continuity,PageParams,IFrameDelay,AutoXHR,SPA,Angular,Backbone,Ember,History,RT,CrossDomain,BW,PaintTiming,NavigationTiming,ResourceTiming,Memory,CACHE_RELOAD,Errors,TPAnalytics,UserTiming,Akamai,LOGN&acao=&ak.ai=642718", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.nacion.com/pb/resources/assets/la_nacion/img/sections/logo_ancora.png", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		"Url=https://www.nacion.com/pb/resources/assets/la_nacion/img/sections/logo_revistadominical.png", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		"Url=https://www.nacion.com/pb/resources/assets/la_nacion/img/sections/sabores_logo.jpg", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		"Url=https://www.nacion.com/pb/resources/assets/la_nacion/img/sections/perfil_logo.jpg", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		"Url=https://www.nacion.com/pb/resources/gncomun/global/footer/img/fa_home.svg", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		"Url=https://www.nacion.com/pb/resources/gncomun/global/footer/img/tw_home.svg", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		LAST);

	web_url("thirdpartycookie", 
		"URL=https://api.viafoura.co/v2/www.nacion.com/thirdpartycookie?section=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.nacion.com/pb/resources/gncomun/global/footer/img/in_home.svg", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Client-Data", 
		"CJW2yQEIorbJAQjBtskBCKmdygEI+MfKAQjjnMsBCKmdywEIoKDLAQjf78sBCNzyywEYjp7LAQ==");

	web_custom_request("collect", 
		"URL=https://stats.g.doubleclick.net/g/collect?v=2&tid=G-509Y5N8WXG&cid=1127036404.1620419546&gtm=2oe4s0&aip=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("RT=\"z=1&dm=nacion.com&si=pwznxnka74l&ss=koerygzd&sl=0&tt=0\"; DOMAIN=www.nacion.com");

	web_add_cookie("cX_P=koeryjbphz53fdla; DOMAIN=www.nacion.com");

	web_add_cookie("_cb_ls=1; DOMAIN=www.nacion.com");

	web_add_cookie("_cb=CHrX6QCGdZzDBihEwB; DOMAIN=www.nacion.com");

	web_add_cookie("_chartbeat2=.1620419545553.1620419545553.1.DxhkT5DDJn2BC79bTxCfdLZhzIlU4.1; DOMAIN=www.nacion.com");

	web_add_cookie("_cb_svref=https%3A%2F%2Fwww.google.com%2F; DOMAIN=www.nacion.com");

	web_add_cookie("_ga_509Y5N8WXG=GS1.1.1620419544.1.0.1620419544.60; DOMAIN=www.nacion.com");

	web_add_cookie("_ga=GA1.1.1127036404.1620419546; DOMAIN=www.nacion.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("config.json_3", 
		"URL=https://c.go-mpulse.net/api/config.json?key=MUS2S-CNA8N-ZZLSU-SW4QW-8FUKY&d=www.nacion.com&t=5401398&v=1.632.0&if=&sl=0&si=pwznxnka74l-qsr7py&plugins=AK,ConfigOverride,Continuity,PageParams,IFrameDelay,AutoXHR,SPA,Angular,Backbone,Ember,History,RT,CrossDomain,BW,PaintTiming,NavigationTiming,ResourceTiming,Memory,CACHE_RELOAD,Errors,TPAnalytics,UserTiming,Akamai,LOGN&acao=&ak.ai=642718", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.nacion.com/pb/resources/gncomun/global/footer/img/footer_email.svg", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		LAST);

	web_url("get_strategy", 
		"URL=https://mab.chartbeat.com/mab_strategy/headline_testing/get_strategy/?host=nacion.com&domain=nacion.com&path=%2F", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.nacion.com/pb/resources/gncomun/global/footer/img/app_home.svg", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		"Url=https://www.nacion.com/pb/resources/gncomun/global/footer/img/footer_print.svg", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		"Url=https://www.nacion.com/pb/resources/gncomun/global/footer/img/footer_suscribe.svg", "Referer=https://www.nacion.com/pb/gr/p/default/r0BX3ccFu2OKws/style.css?_=c4616", ENDITEM, 
		LAST);

	web_websocket_close("ID=0", 
		"Code=1000", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_websocket_connect("ID=1", 
		"URI=wss://sub.viafoura.co/?site_uuid=00000000-0000-4000-8000-06c44884a6d1", 
		"Origin=https://www.nacion.com", 
		"OnOpenCB=OnOpenCB1", 
		"OnMessageCB=OnMessageCB1", 
		"OnErrorCB=OnErrorCB1", 
		"OnCloseCB=OnCloseCB1", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("analytics2.m2.ai", 
		"URL=https://analytics2.m2.ai/?device=desktop&publisher=www.nacion.com", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("stream", 
		"URL=https://analytics2.m2.ai/stream?beacon=immediate", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"streams\":[{\"stream\":\"pageviews\",\"base\":{},\"objects\":[{}]}],\"allBase\":{\"id\":\"82ba6e46-cafa-4e39-a05f-0dd814fc2065\",\"stream\":\"pageviews\",\"stage\":\"afterInit\",\"url\":\"https://www.nacion.com/\",\"domain\":\"nacion.com\",\"build\":\"210325-e8f\",\"pbjs\":\"3.3.0\",\"file\":\"pg.nacion.com.js\",\"userId\":\"29ae22c2-650e-4acf-81c2-d42ed0702aa7\",\"sessionId\":\"4c4fcaf4-3382-4e11-835b-f99a9ee88687\",\"timestamp\":1620419548790,\"referrer\":\"https://www.google.com/\",\""
		"environment\":{},\"canonical\":\"https://www.nacion.com/\",\"m2Canonical\":\"eb281f6382631fe9741831a4f2cd6c7d\",\"configId\":8978,\"stagingPercent\":0,\"analyticsPercent\":0.1,\"device\":\"desktop\",\"pageviewId\":\"bc2941d5-4d6c-4cbc-890d-56ff840a626a\",\"ip\":\"??\",\"sessionDepth\":1,\"country\":\"??\",\"region\":\"??\",\"utmSource\":\"/empty/\",\"utmMedium\":\"/empty/\",\"utmContent\":\"/empty/\",\"utmTerm\":\"/empty/\",\"utmCampaign\":\"/empty/\",\"localStorage\":true,\"screenWidth\":1266,\""
		"screenHeight\":601,\"gdpr\":\"??\",\"ccpa\":\"??\",\"lgpd\":\"??\",\"segments\":{},\"dfpNetwork\":\"www.nacion.com\",\"sendType\":\"immediate\"}}", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("sp1.html", 
		"URL=https://scdn.cxense.com/sp1.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Origin", 
		"https://www.nacion.com");

	web_submit_data("execute", 
		"Action=https://experience.tinypass.com/xbuilder/experience/execute?aid=BM6tVBSjXE", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=protocol_version", "Value=1", ENDITEM, 
		"Name=has_active_apple_pay_card", "Value=", ENDITEM, 
		"Name=custom_cookies", "Value={}", ENDITEM, 
		"Name=push_notification_settings", "Value=UNKNOWN", ENDITEM, 
		"Name=mailing_lists", "Value=[]", ENDITEM, 
		"Name=debug", "Value=true", ENDITEM, 
		"Name=increment_pageview_meter", "Value=true", ENDITEM, 
		"Name=aid", "Value=BM6tVBSjXE", ENDITEM, 
		"Name=user_provider", "Value=piano_id", ENDITEM, 
		"Name=user_token", "Value=", ENDITEM, 
		"Name=page_session_id", "Value=s-2021-05-07-20-32-29-352-q6htt1LHyNJN3vFU-8cb83c76f4f6e08bcd171d249be732e5", ENDITEM, 
		"Name=track_count", "Value=1", ENDITEM, 
		"Name=pageview_id", "Value=2021-05-07-20-32-29-352-WIzTIypmYcoXBAil-8cb83c76f4f6e08bcd171d249be732e5", ENDITEM, 
		"Name=zone", "Value=Web", ENDITEM, 
		"Name=content_section", "Value=/la-nacion/audiencias", ENDITEM, 
		"Name=content_author", "Value=Portada", ENDITEM, 
		"Name=referer", "Value=https://www.google.com/", ENDITEM, 
		"Name=tags", "Value=promo_audiencias,blackfriday", ENDITEM, 
		"Name=url", "Value=https://www.nacion.com/", ENDITEM, 
		"Name=fingerprint", "Value=6a80c1cfe512f506c8bb5c088eee50fb", ENDITEM, 
		"Name=adblocker", "Value=-1", ENDITEM, 
		"Name=timezone_offset", "Value=0", ENDITEM, 
		"Name=submit_type", "Value=auto", ENDITEM, 
		"Name=visit_id", "Value=v-2021-05-07-20-32-29-355-CP5HswLYb0UYpg6q-8cb83c76f4f6e08bcd171d249be732e5", ENDITEM, 
		"Name=new_visit", "Value=true", ENDITEM, 
		"Name=keywords", "Value=", ENDITEM, 
		"Name=title", "Value=", ENDITEM, 
		"Name=description", "Value=Noticias de Costa Rica y el mundo: política, economía, deportes, ciencia y cultura, entre otros temas.", ENDITEM, 
		"Name=content_type", "Value=", ENDITEM, 
		"Name=custom_variables", "Value={}", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_url("unified_vendor_list.json", 
		"URL=https://cdn.pubguru.com/v2/unified_vendor_list.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.nacion.com");

	web_submit_data("loadTemplateContext", 
		"Action=https://buy.tinypass.com/api/v3/anon/template/loadTemplateContext?aid=BM6tVBSjXE", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=user_token", "Value=", ENDITEM, 
		"Name=user_lang", "Value=", ENDITEM, 
		"Name=tracking_id", "Value={jcx}H4sIAAAAAAAAAI2QS3OCMBSF_0vWxkkCgcBOWjsyPooWUZYhRIiDgDzEttP_XrS2HWe66N3d-51z5s55B1zFwAbO3GgC52W_HYMBKHkiAyU790IIIhgiCpEJCYIagcSCGiVw47757mt5CEWxdUYqg0xETBOmsdN3hkQsEjE2cUx0K5KmRiTtg-W5lJWSuZDX6PF2pi_x02puOes7Oj5L0TaqyK8yzBBFZpoca4j6IS1nKdZilbSWXu4RUnEcFXf-kfgx12nR-fJQZryRi6k1nWwWHguZSazekfL6mwG7qVo5AM1tv5qffZfqC53NwkcGflnAK8Xz5iYJlt7KI8408EmvEfxQcpXkNbDzNssG4KRq9SU9wb-7pPDBo5O6m4URWodlYhz_06Uq-0htSCgasiHG_aWtZTVKZN70IO7E5eEmAzY2SN8ftQz88Qm3Up1x7gEAAA", ENDITEM, 
		"Name=tbc", "Value={jzx}hqPxWBamX8F22_WiB3FD03dpTR0ZZJLqMpbF-m1ye47vvavIykrjnWumSYDFYXOcAnmFOqjOWcan9NvL_as08xlzWEyXzdQ1AVfmU2YVprrRnnfLxODbJPfGiQM8FPZs-j03px0uVcUBUL3h8SpYTQ", ENDITEM, 
		"Name=user_provider", "Value=piano_id", ENDITEM, 
		LAST);

	web_submit_data("loadTemplateContext_2", 
		"Action=https://buy.tinypass.com/api/v3/anon/template/loadTemplateContext?aid=BM6tVBSjXE", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=user_token", "Value=", ENDITEM, 
		"Name=user_lang", "Value=", ENDITEM, 
		"Name=tracking_id", "Value={jcx}H4sIAAAAAAAAAI2Q0W6CMBSG36XX1rTFFvQOGEYTzZYpiLsrpUIXwApF3Ja9-5DMLSa7WO96vvP9Ofk_AFcpmAFvzUzkbV7jAIyA5pmMlOyWV0IQwRBRiGxIELQIJFNoUQJ3y_ft8k2Xe3GMPVcV0BGJYwmbHSYHJpGTiBTbOCWTaSJti0jaB8uLlrWSlZBDdBAvGPXRZvUSenc0uEjRGnWshjXsIIrsPDs1EPWPtNzJsZWWDrGTzBJlIrWF7nxX_MhNfuy2stQFNxKtvLm_mLjrXfiMWW_kvLkxMDN1K0fAfP8H-XEbBb0QP8z9EPyyiNeKV-a6UrVFMQKCl5qrrGpug7Nq1MDBGf5dIIX-E1003WqfoHCvM3b6T4FK95HWmFA0dsYY95O2kbWbycr0IO3E9UpTgBlmpC-NThn-_AKJepDy4wEAAA", ENDITEM, 
		"Name=tbc", "Value={jzx}hqPxWBamX8F22_WiB3FD03dpTR0ZZJLqMpbF-m1ye47vvavIykrjnWumSYDFYXOcAnmFOqjOWcan9NvL_as08xlzWEyXzdQ1AVfmU2YVprrRnnfLxODbJPfGiQM8FPZs-j03px0uVcUBUL3h8SpYTQ", ENDITEM, 
		"Name=user_provider", "Value=piano_id", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("cacheableShow", 
		"URL=https://buy.tinypass.com/checkout/template/cacheableShow?aid=BM6tVBSjXE&templateId=OTVECH4XDFCU&offerId=fakeOfferId&experienceId=EXH65C0SLZUB&iframeId=offer_c6e26f7a9aa20f81c47c-0&displayMode=inline&debug=true&pianoIdUrl=https%3A%2F%2Fid.tinypass.com%2Fid%2F&widget=template", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cacheableShow_2", 
		"URL=https://buy.tinypass.com/checkout/template/cacheableShow?aid=BM6tVBSjXE&templateId=OTI54N48LYD8&templateVariantId=OTVQPRP2BKVT2&offerId=fakeOfferId&experienceId=EXL4Q1FRM9BU&iframeId=offer_7928b8c1174289e86937-0&displayMode=inline&debug=true&pianoIdUrl=https%3A%2F%2Fid.tinypass.com%2Fid%2F&widget=template", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Origin", 
		"https://www.nacion.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_submit_data("loadTemplateContext_3", 
		"Action=https://buy.tinypass.com/api/v3/anon/template/loadTemplateContext?aid=BM6tVBSjXE", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=user_token", "Value=", ENDITEM, 
		"Name=user_lang", "Value=", ENDITEM, 
		"Name=tracking_id", "Value={jcx}H4sIAAAAAAAAAI2QX2-CMBTFv0ufrWkLpcU3cE5N5qbOITyWUqEOAfkjbsu--5DMLSZ72H2793fOyc35AEJHYATchVV77vPen4ABKESsPK3a-YUQRDBEFCIGCYIGgcSGBiVwO3_fzN-KQyBz33V0CrkMuSGZtTN3lkI8lBFmOCKmHSpmEEW7YHUuVKlVJlUfPfHvLNtcucs19W7o5KxkU-s862WYI4pYEh8riLohjeAJNqKcIf5qsszU--MO3fgd-WOukrzdqEORilrx5eJ-jE02feRbzDtHIqorA6O6bNQA1N97b37aBA6fcsefrdbgl3mi1CKrL5KsSdMBkOJQCB1n1fVw0pXuOTjBvwukcLyks6p9CEL0EhSxdfxPgbroIo0hoWjIhxh3l6ZSpROrrO5A1MrLl3UKRtgiXWnUtvDnFy_nti3jAQAA", ENDITEM, 
		"Name=tbc", "Value={jzx}hqPxWBamX8F22_WiB3FD03dpTR0ZZJLqMpbF-m1ye47vvavIykrjnWumSYDFYXOcAnmFOqjOWcan9NvL_as08xlzWEyXzdQ1AVfmU2YVprrRnnfLxODbJPfGiQM8FPZs-j03px0uVcUBUL3h8SpYTQ", ENDITEM, 
		"Name=user_provider", "Value=piano_id", ENDITEM, 
		LAST);

	web_submit_data("loadTemplateContext_4", 
		"Action=https://buy.tinypass.com/api/v3/anon/template/loadTemplateContext?aid=BM6tVBSjXE", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=user_token", "Value=", ENDITEM, 
		"Name=user_lang", "Value=", ENDITEM, 
		"Name=tracking_id", "Value={jcx}H4sIAAAAAAAAAI2QT1ODMBDFv0vOTScJhD-9lQ5oO9Z2LNLiLYQUohQoBKg6fneBsTrOeHBvu799b3bfO2AyBjPgrA0VOLvngwsmoGSJCKTolgMhiGCIKEQmJAhqBBIbapTA_fLNX76Wp5AXB2cuM2jxyNK4aRz1oyGQFfEYmzgmuh0JUyOC9sbiUopKipyL0do9bF3PXa-Ig51f1L0I3ihZ5OMathBFZpqca4j6Ig2zUqzFpWjj1G4Li5kvevJLP-ff4jotOl-cyowp8aAZW3zvrzxnvfA2uJekrL5CMFNVIyZAffWjeuN7xtNurwehdgN-WMAqyXI1rORNlk0AZ6eSySSvr4NW1nLkoIV_J0jhYktv6-4ujNBjWCbG-T8JyrK31KaEoqk1xcMLTS2qeSJy1YO448OVKgMzbJA-NWob-OMT_t7zj-QBAAA", ENDITEM, 
		"Name=tbc", "Value={jzx}hqPxWBamX8F22_WiB3FD03dpTR0ZZJLqMpbF-m1ye47vvavIykrjnWumSYDFYXOcAnmFOqjOWcan9NvL_as08xlzWEyXzdQ1AVfmU2YVprrRnnfLxODbJPfGiQM8FPZs-j03px0uVcUBUL3h8SpYTQ", ENDITEM, 
		"Name=user_provider", "Value=piano_id", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("cacheableShow_3", 
		"URL=https://buy.tinypass.com/checkout/template/cacheableShow?aid=BM6tVBSjXE&templateId=OTF6ZSW4VY3G&offerId=fakeOfferId&experienceId=EXPEFEMJ2B1B&iframeId=offer_e2fef953015106cf8c22-0&displayMode=inline&debug=true&pianoIdUrl=https%3A%2F%2Fid.tinypass.com%2Fid%2F&widget=template", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/widget/dist/template/css/template.bundle.1.0.css", "Referer=https://buy.tinypass.com/checkout/template/cacheableShow?aid=BM6tVBSjXE&templateId=OTVECH4XDFCU&offerId=fakeOfferId&experienceId=EXH65C0SLZUB&iframeId=offer_c6e26f7a9aa20f81c47c-0&displayMode=inline&debug=true&pianoIdUrl=https%3A%2F%2Fid.tinypass.com%2Fid%2F&widget=template", ENDITEM, 
		LAST);

	web_add_cookie("cX_T=koerynuwlehp1kab; DOMAIN=scomcluster.cxense.com");

	web_add_cookie("expiretoken=; DOMAIN=scomcluster.cxense.com");

	web_add_cookie("LANG_CHANGED=en_US; DOMAIN=buy.tinypass.com");

	web_add_cookie("cX_S=koerymftd1dbvwlo; DOMAIN=www.nacion.com");

	web_add_cookie("cX_G=cx%3A33qwk90q3ebjg3uiiok2dz3rwx%3A3slwzl59eqp6d; DOMAIN=www.nacion.com");

	web_url("cacheableShow_4", 
		"URL=https://buy.tinypass.com/checkout/template/cacheableShow?aid=BM6tVBSjXE&templateId=OTYA8G8AXHQR&offerId=fakeOfferId&experienceId=EXD694QBPR5V&iframeId=offer_4ced0c562c6257591fd0-0&displayMode=inline&debug=true&pianoIdUrl=https%3A%2F%2Fid.tinypass.com%2Fid%2F&widget=template", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.nacion.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/ng/common/i18n/platform-translation-map_en_US.js?version=12.179.1", "Referer=https://buy.tinypass.com/checkout/template/cacheableShow?aid=BM6tVBSjXE&templateId=OTVECH4XDFCU&offerId=fakeOfferId&experienceId=EXH65C0SLZUB&iframeId=offer_c6e26f7a9aa20f81c47c-0&displayMode=inline&debug=true&pianoIdUrl=https%3A%2F%2Fid.tinypass.com%2Fid%2F&widget=template", ENDITEM, 
		"Url=/showtemplate/general/loadTranslationMap?aid=BM6tVBSjXE&version=1618854563000&language=en_US", "Referer=https://buy.tinypass.com/checkout/template/cacheableShow?aid=BM6tVBSjXE&templateId=OTVECH4XDFCU&offerId=fakeOfferId&experienceId=EXH65C0SLZUB&iframeId=offer_c6e26f7a9aa20f81c47c-0&displayMode=inline&debug=true&pianoIdUrl=https%3A%2F%2Fid.tinypass.com%2Fid%2F&widget=template", ENDITEM, 
		"Url=https://scomcluster.cxense.com/Repo/rep.gif?ver=1&typ=pgv&rnd=koeryj5kh7o2n9dz&sid=1127341995055146355&loc=https%3A%2F%2Fwww.nacion.com%2F&new=0&arf=0&ltm=1620419545208&ref=https%3A%2F%2Fwww.google.com%2F&tzo=0&res=1266x712&dpr=1&col=24&bln=en-US&chs=UTF-8&cks=koerymftd1dbvwlo&ckp=koeryjbphz53fdla&glb=&wsz=1266x601&cp_estadoUsuario=ANONIMO&cp_EF_ACCESS=false&cp_LT_ACCESS=false&cp_LN_ACCESS=false&cst=2r0yzlyl8dqyq20gu3ymwix2tp", "Referer=https://scdn.cxense.com/", ENDITEM, 
		"Url=/_sam/H4sIAAAAAAAAAD3IwQ6AIAgA0B9KmJ76m4bJHI6oBa7f7-bt7eEnrXNgEw8Mvh6lYBy-DHVaU95QpTqS9an0pgwFSkHJu63T-yTlgy1Nh-E_BjVxNVoAAAA?compressed=true&v=12.179.1", "Referer=https://buy.tinypass.com/checkout/template/cacheableShow?aid=BM6tVBSjXE&templateId=OTVECH4XDFCU&offerId=fakeOfferId&experienceId=EXH65C0SLZUB&iframeId=offer_c6e26f7a9aa20f81c47c-0&displayMode=inline&debug=true&pianoIdUrl=https%3A%2F%2Fid.tinypass.com%2Fid%2F&widget=template", ENDITEM, 
		"Url=/widget/dist/template/css/img/fail-icon.png", "Referer=https://buy.tinypass.com/widget/dist/template/css/template.bundle.1.0.css", ENDITEM, 
		"Url=https://www.nacion.com/gnfactory/especiales/recursos/images/otros/banneranual.gif", "Referer=https://buy.tinypass.com/", ENDITEM, 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Ng-Request", 
		"1");

	web_add_auto_header("Origin", 
		"https://buy.tinypass.com");

	web_add_auto_header("Piano-request-without-spinner", 
		"1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("trackShow", 
		"URL=https://buy.tinypass.com/checkout/template/trackShow", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://buy.tinypass.com/checkout/template/cacheableShow?aid=BM6tVBSjXE&templateId=OTVECH4XDFCU&offerId=fakeOfferId&experienceId=EXH65C0SLZUB&iframeId=offer_c6e26f7a9aa20f81c47c-0&displayMode=inline&debug=true&pianoIdUrl=https%3A%2F%2Fid.tinypass.com%2Fid%2F&widget=template", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"initStatParams\":{\"aid\":\"BM6tVBSjXE\",\"url\":\"https://www.nacion.com/\",\"tags\":\"promo_audiencias,blackfriday\",\"tbc\":\"{jzx}hqPxWBamX8F22_WiB3FD03dpTR0ZZJLqMpbF-m1ye47vvavIykrjnWumSYDFYXOcAnmFOqjOWcan9NvL_as08xlzWEyXzdQ1AVfmU2YVprrRnnfLxODbJPfGiQM8FPZs-j03px0uVcUBUL3h8SpYTQ\",\"contentSection\":\"/la-nacion/audiencias\",\"contentAuthor\":\"Portada\",\"experienceId\":\"EXH65C0SLZUB\",\"pageViewId\":\"2021-05-07-20-32-29-352-WIzTIypmYcoXBAil-8cb83c76f4f6e08bcd171d249be732e5\",\""
		"visitId\":\"v-2021-05-07-20-32-29-355-CP5HswLYb0UYpg6q-8cb83c76f4f6e08bcd171d249be732e5\",\"trackingId\":\"{jcx}"
		"H4sIAAAAAAAAAI2Q0W6CMBSG36XX1rTFFvQOGEYTzZYpiLsrpUIXwApF3Ja9-5DMLSa7WO96vvP9Ofk_AFcpmAFvzUzkbV7jAIyA5pmMlOyWV0IQwRBRiGxIELQIJFNoUQJ3y_ft8k2Xe3GMPVcV0BGJYwmbHSYHJpGTiBTbOCWTaSJti0jaB8uLlrWSlZBDdBAvGPXRZvUSenc0uEjRGnWshjXsIIrsPDs1EPWPtNzJsZWWDrGTzBJlIrWF7nxX_MhNfuy2stQFNxKtvLm_mLjrXfiMWW_kvLkxMDN1K0fAfP8H-XEbBb0QP8z9EPyyiNeKV-a6UrVFMQKCl5qrrGpug7Nq1MDBGf5dIIX-E1003WqfoHCvM3b6T4FK95HWmFA0dsYY95O2kbWbycr0IO3E9UpTgBlmpC-NThn-_AKJepDy4wEAAA\",\"offerId\":\"fakeOfferId\",\"templateId\":\"OTVECH4XDFCU\","
		"\"checkoutView\":null}}", 
		LAST);

	web_custom_request("trackShow_2", 
		"URL=https://buy.tinypass.com/checkout/template/trackShow", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://buy.tinypass.com/checkout/template/cacheableShow?aid=BM6tVBSjXE&templateId=OTI54N48LYD8&templateVariantId=OTVQPRP2BKVT2&offerId=fakeOfferId&experienceId=EXL4Q1FRM9BU&iframeId=offer_7928b8c1174289e86937-0&displayMode=inline&debug=true&pianoIdUrl=https%3A%2F%2Fid.tinypass.com%2Fid%2F&widget=template", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"initStatParams\":{\"aid\":\"BM6tVBSjXE\",\"url\":\"https://www.nacion.com/\",\"tags\":\"promo_audiencias,blackfriday\",\"tbc\":\"{jzx}hqPxWBamX8F22_WiB3FD03dpTR0ZZJLqMpbF-m1ye47vvavIykrjnWumSYDFYXOcAnmFOqjOWcan9NvL_as08xlzWEyXzdQ1AVfmU2YVprrRnnfLxODbJPfGiQM8FPZs-j03px0uVcUBUL3h8SpYTQ\",\"contentSection\":\"/la-nacion/audiencias\",\"contentAuthor\":\"Portada\",\"experienceId\":\"EXL4Q1FRM9BU\",\"pageViewId\":\"2021-05-07-20-32-29-352-WIzTIypmYcoXBAil-8cb83c76f4f6e08bcd171d249be732e5\",\""
		"visitId\":\"v-2021-05-07-20-32-29-355-CP5HswLYb0UYpg6q-8cb83c76f4f6e08bcd171d249be732e5\",\"trackingId\":\"{jcx}"
		"H4sIAAAAAAAAAI2QS3OCMBSF_0vWxkkCgcBOWjsyPooWUZYhRIiDgDzEttP_XrS2HWe66N3d-51z5s55B1zFwAbO3GgC52W_HYMBKHkiAyU790IIIhgiCpEJCYIagcSCGiVw47757mt5CEWxdUYqg0xETBOmsdN3hkQsEjE2cUx0K5KmRiTtg-W5lJWSuZDX6PF2pi_x02puOes7Oj5L0TaqyK8yzBBFZpoca4j6IS1nKdZilbSWXu4RUnEcFXf-kfgx12nR-fJQZryRi6k1nWwWHguZSazekfL6mwG7qVo5AM1tv5qffZfqC53NwkcGflnAK8Xz5iYJlt7KI8408EmvEfxQcpXkNbDzNssG4KRq9SU9wb-7pPDBo5O6m4URWodlYhz_06Uq-0htSCgasiHG_aWtZTVKZN70IO7E5eEmAzY2SN8ftQz88Qm3Up1x7gEAAA\",\"offerId\":\"fakeOfferId\",\"templateId\":\""
		"OTI54N48LYD8\",\"templateVariantId\":\"OTVQPRP2BKVT2\",\"checkoutView\":null}}", 
		LAST);

	web_custom_request("trackShow_3", 
		"URL=https://buy.tinypass.com/checkout/template/trackShow", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://buy.tinypass.com/checkout/template/cacheableShow?aid=BM6tVBSjXE&templateId=OTF6ZSW4VY3G&offerId=fakeOfferId&experienceId=EXPEFEMJ2B1B&iframeId=offer_e2fef953015106cf8c22-0&displayMode=inline&debug=true&pianoIdUrl=https%3A%2F%2Fid.tinypass.com%2Fid%2F&widget=template", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"initStatParams\":{\"aid\":\"BM6tVBSjXE\",\"url\":\"https://www.nacion.com/\",\"tags\":\"promo_audiencias,blackfriday\",\"tbc\":\"{jzx}hqPxWBamX8F22_WiB3FD03dpTR0ZZJLqMpbF-m1ye47vvavIykrjnWumSYDFYXOcAnmFOqjOWcan9NvL_as08xlzWEyXzdQ1AVfmU2YVprrRnnfLxODbJPfGiQM8FPZs-j03px0uVcUBUL3h8SpYTQ\",\"contentSection\":\"/la-nacion/audiencias\",\"contentAuthor\":\"Portada\",\"experienceId\":\"EXPEFEMJ2B1B\",\"pageViewId\":\"2021-05-07-20-32-29-352-WIzTIypmYcoXBAil-8cb83c76f4f6e08bcd171d249be732e5\",\""
		"visitId\":\"v-2021-05-07-20-32-29-355-CP5HswLYb0UYpg6q-8cb83c76f4f6e08bcd171d249be732e5\",\"trackingId\":\"{jcx}"
		"H4sIAAAAAAAAAI2QT1ODMBDFv0vOTScJhD-9lQ5oO9Z2LNLiLYQUohQoBKg6fneBsTrOeHBvu799b3bfO2AyBjPgrA0VOLvngwsmoGSJCKTolgMhiGCIKEQmJAhqBBIbapTA_fLNX76Wp5AXB2cuM2jxyNK4aRz1oyGQFfEYmzgmuh0JUyOC9sbiUopKipyL0do9bF3PXa-Ig51f1L0I3ihZ5OMathBFZpqca4j6Ig2zUqzFpWjj1G4Li5kvevJLP-ff4jotOl-cyowp8aAZW3zvrzxnvfA2uJekrL5CMFNVIyZAffWjeuN7xtNurwehdgN-WMAqyXI1rORNlk0AZ6eSySSvr4NW1nLkoIV_J0jhYktv6-4ujNBjWCbG-T8JyrK31KaEoqk1xcMLTS2qeSJy1YO448OVKgMzbJA-NWob-OMT_t7zj-QBAAA\",\"offerId\":\"fakeOfferId\",\"templateId\":\""
		"OTF6ZSW4VY3G\",\"checkoutView\":null}}", 
		LAST);

	web_custom_request("trackShow_4", 
		"URL=https://buy.tinypass.com/checkout/template/trackShow", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://buy.tinypass.com/checkout/template/cacheableShow?aid=BM6tVBSjXE&templateId=OTYA8G8AXHQR&offerId=fakeOfferId&experienceId=EXD694QBPR5V&iframeId=offer_4ced0c562c6257591fd0-0&displayMode=inline&debug=true&pianoIdUrl=https%3A%2F%2Fid.tinypass.com%2Fid%2F&widget=template", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"initStatParams\":{\"aid\":\"BM6tVBSjXE\",\"url\":\"https://www.nacion.com/\",\"tags\":\"promo_audiencias,blackfriday\",\"tbc\":\"{jzx}hqPxWBamX8F22_WiB3FD03dpTR0ZZJLqMpbF-m1ye47vvavIykrjnWumSYDFYXOcAnmFOqjOWcan9NvL_as08xlzWEyXzdQ1AVfmU2YVprrRnnfLxODbJPfGiQM8FPZs-j03px0uVcUBUL3h8SpYTQ\",\"contentSection\":\"/la-nacion/audiencias\",\"contentAuthor\":\"Portada\",\"experienceId\":\"EXD694QBPR5V\",\"pageViewId\":\"2021-05-07-20-32-29-352-WIzTIypmYcoXBAil-8cb83c76f4f6e08bcd171d249be732e5\",\""
		"visitId\":\"v-2021-05-07-20-32-29-355-CP5HswLYb0UYpg6q-8cb83c76f4f6e08bcd171d249be732e5\",\"trackingId\":\"{jcx}"
		"H4sIAAAAAAAAAI2QX2-CMBTFv0ufrWkLpcU3cE5N5qbOITyWUqEOAfkjbsu--5DMLSZ72H2793fOyc35AEJHYATchVV77vPen4ABKESsPK3a-YUQRDBEFCIGCYIGgcSGBiVwO3_fzN-KQyBz33V0CrkMuSGZtTN3lkI8lBFmOCKmHSpmEEW7YHUuVKlVJlUfPfHvLNtcucs19W7o5KxkU-s862WYI4pYEh8riLohjeAJNqKcIf5qsszU--MO3fgd-WOukrzdqEORilrx5eJ-jE02feRbzDtHIqorA6O6bNQA1N97b37aBA6fcsefrdbgl3mi1CKrL5KsSdMBkOJQCB1n1fVw0pXuOTjBvwukcLyks6p9CEL0EhSxdfxPgbroIo0hoWjIhxh3l6ZSpROrrO5A1MrLl3UKRtgiXWnUtvDnFy_nti3jAQAA\",\"offerId\":\"fakeOfferId\",\"templateId\":\"OTYA8G8AXHQR\""
		",\"checkoutView\":null}}", 
		LAST);

	return 0;
}