Action()
{

	web_add_cookie("1_product=9e40f4f8ac90faa0dbba40b3445698512887b09as%3A1%3A%221%22%3B; DOMAIN=10.7.90.205");

	web_add_cookie("pageSize=601e6f18f0f7d75f725d1c40e3c57164989e2c3as%3A2%3A%2220%22%3B; DOMAIN=10.7.90.205");

	web_add_cookie("ac-cookie=%5B%7B%22data%22%3A%5B%22%E7%B3%BB%E7%BB%9F%E7%AE%A1%E7%90%86%E5%91%98%22%2C%22%E7%B3%BB%E7%BB%9F%E7%AE%A1%E7%90%86%E5%91%98%5Badmin%5D%22%5D%2C%22value%22%3A%22%E7%B3%BB%E7%BB%9F%E7%AE%A1%E7%90%86%E5%91%98%22%2C%22result%22%3A%22%E7%B3%BB%E7%BB%9F%E7%AE%A1%E7%90%86%E5%91%98%22%7D%5D; DOMAIN=10.7.90.205");

	web_add_cookie("language=0a2b4a62849989ee73f383f7dc48db485efcaca8s%3A5%3A%22zh_cn%22%3B; DOMAIN=10.7.90.205");
   
	lr_start_transaction("login");

	web_url("login",
		"URL=http://10.7.90.205/bugfree3.0.3/index.php/site/login",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t1.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=/bugfree3.0.3/themes/classic/assets/images/blue/seperate_line.png", ENDITEM,
		"URL=/bugfree3.0.3/themes/classic/assets/images/blue/logo_login.png", ENDITEM,
		LAST);

	web_submit_form("login_2",
		"Snapshot=t2.inf",
		ITEMDATA,
		"Name=LoginForm[username]", "Value=admin", ENDITEM,
		"Name=LoginForm[password]", "Value=123456", ENDITEM,
		"Name=LoginForm[language]", "Value=��������", ENDITEM,
		"Name=LoginForm[rememberMe]", "Value=<OFF>", ENDITEM,
		EXTRARES,
		"URL=/bugfree3.0.3/themes/classic/assets/images/down.gif", "Referer=http://10.7.90.205/bugfree3.0.3/index.php/bug/list/1", ENDITEM,
		"URL=/bugfree3.0.3/themes/classic/assets/images/active.png", "Referer=http://10.7.90.205/bugfree3.0.3/index.php/bug/list/1", ENDITEM,
		"URL=/bugfree3.0.3/themes/classic/assets/images//close_div.gif", "Referer=http://10.7.90.205/bugfree3.0.3/index.php/bug/list/1", ENDITEM,
		"URL=/bugfree3.0.3/assets/10643704/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://10.7.90.205/bugfree3.0.3/index.php/bug/list/1", ENDITEM,
		"URL=/bugfree3.0.3/assets/10643704/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://10.7.90.205/bugfree3.0.3/index.php/bug/list/1", ENDITEM,
		"URL=/bugfree3.0.3/assets/10643704/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://10.7.90.205/bugfree3.0.3/index.php/bug/list/1", ENDITEM,
		"URL=/bugfree3.0.3/assets/4b9d3645/img/page.gif", "Referer=http://10.7.90.205/bugfree3.0.3/index.php/bug/list/1", ENDITEM,
		LAST);

	web_submit_data("getProductModule",
		"Action=http://10.7.90.205/bugfree3.0.3/index.php/search/getProductModule",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://10.7.90.205/bugfree3.0.3/index.php/bug/list/1",
		"Snapshot=t3.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=product_id", "Value=1", ENDITEM,
		"Name=productmodule_id", "Value=0", ENDITEM,
		LAST);


	lr_think_time(7);
    
	lr_end_transaction("login", LR_AUTO);


	lr_start_transaction("edit");

	

	web_url("edit",
		"URL=http://10.7.90.205/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://10.7.90.205/bugfree3.0.3/index.php/bug/list/1",
		"Snapshot=t4.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=/bugfree3.0.3/themes/classic/assets/images/active.png", "Referer=http://10.7.90.205/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM,
		"URL=/bugfree3.0.3/assets/10643704/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://10.7.90.205/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM,
		"URL=/bugfree3.0.3/assets/10643704/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://10.7.90.205/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM,
		"URL=/bugfree3.0.3/assets/10643704/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://10.7.90.205/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM,
		"URL=/bugfree3.0.3/assets/e520453c/themes/default/default.css", "Referer=http://10.7.90.205/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM,
		"URL=/bugfree3.0.3/assets/e520453c/themes/default/default.png", "Referer=http://10.7.90.205/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM,
		"URL=/bugfree3.0.3/assets/ab61b02b/indicator.gif", "Referer=http://10.7.90.205/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM,
		LAST);

	lr_think_time(57);

	web_submit_data("edit_2",
		"Action=http://10.7.90.205/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1",
		"Method=POST",
		"EncType=multipart/form-data",
		"RecContentType=text/html",
		"Referer=http://10.7.90.205/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1",
		"Snapshot=t5.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=BugInfoView[deleted_file_id]", "Value=", ENDITEM,
		"Name=BugInfoView[lock_version]", "Value=", ENDITEM,
		"Name=BugInfoView[product_id]", "Value=1", ENDITEM,
		"Name=isPageDirty", "Value=1", ENDITEM,
		"Name=templateTitle", "Value=", ENDITEM,
		"Name=BugInfoView[title]", "Value={title}", ENDITEM,
		"Name=layer1_module", "Value=0", ENDITEM,
		"Name=BugInfoView[productmodule_id]", "Value=0", ENDITEM,
		"Name=BugInfoView[assign_to_name]", "Value=ϵͳ����Ա", ENDITEM,
		"Name=BugInfoView[mail_to]", "Value=ϵͳ����Ա,", ENDITEM,
		"Name=BugInfoView[severity]", "Value=1", ENDITEM,
		"Name=BugInfoView[priority]", "Value=1", ENDITEM,
		"Name=Custom[BugType]", "Value={bugtype}", ENDITEM,
		"Name=Custom[HowFound]", "Value={Howfound}", ENDITEM,
		"Name=Custom[BugOS]", "Value=ȫ��", ENDITEM,
		"Name=Custom[BugBrowser]", "Value=ȫ��", ENDITEM,
		"Name=Custom[OpenedBuild]", "Value={build}", ENDITEM,
		"Name=Custom[ResolvedBuild]", "Value=", ENDITEM,
		"Name=Custom[BugSubStatus]", "Value=", ENDITEM,
		"Name=Custom[BugMachine]", "Value=", ENDITEM,
		"Name=Custom[BugKeyword]", "Value=", ENDITEM,
		"Name=BugInfoView[related_bug]", "Value=", ENDITEM,
		"Name=BugInfoView[related_case]", "Value=", ENDITEM,
		"Name=BugInfoView[related_result]", "Value=", ENDITEM,
		"Name=attachment_file[]", "Value=", "File=yes", ENDITEM,
		"Name=BugInfoView[action_note]", "Value={nolte}", ENDITEM,
		"Name=BugInfoView[repeat_step]", "Value=[����]<br />\r\n"
		"1.bugfree<br />\r\n"
		"2.bugfree<br />\r\n"
		"<br />\r\n"
		"[���]bugfree<br />\r\n"
		"<br />\r\n"
		"[����]bugfree<br />\r\n"
		"<br />\r\n"
		"[��ע]bugfree<br />\r\n"
		"<br />", ENDITEM,
		LAST);

	web_url("web_url",
		"URL=http://10.7.90.205/bugfree3.0.3/index.php/bug/14",
		"TargetFrame=",
		"Resource=1",
		"Referer=",
		"Mode=HTML",
		LAST);
	web_url("14",
		"URL=http://10.7.90.205/bugfree3.0.3/index.php/bug/14",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t6.inf",
		"Mode=HTML",
		LAST);

	web_url("getPreNextId",
		"URL=http://10.7.90.205/bugfree3.0.3/index.php/search/getPreNextId?id=14&type=bug&product_id=1",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://10.7.90.205/bugfree3.0.3/index.php/bug/14",
		"Snapshot=t7.inf",
		"Mode=HTML",
		LAST);
    
	lr_end_transaction("edit", LR_AUTO);


return 0;
}
