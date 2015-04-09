/*
 * =====================================================================================
 *
 *       Filename:  httpserver.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/06/2015 06:41:50 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */


#include <event.h>

int main()
{

	struct event_bask *base;
	struct evhttp *http;

	base = event_init();
	http = evhttp_new(base);
}
