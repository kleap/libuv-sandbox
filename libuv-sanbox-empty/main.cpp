#pragma comment (lib, "libuv.lib")
#pragma comment (lib, "ws2_32.lib")
#pragma comment(lib, "psapi.lib")
#pragma comment(lib, "Iphlpapi.lib")
#pragma comment(lib, "userenv.lib")


#include <stdio.h>
#include <stdlib.h>
#include <uv.h>

int main() {
	uv_loop_t*	 loop = (uv_loop_t*)malloc(sizeof(uv_loop_t));
	uv_loop_init(loop);

	printf("Now quitting.\n");
	uv_run(loop, UV_RUN_ONCE);

	uv_loop_close(loop);
	free(loop);
	return 0;

}