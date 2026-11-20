
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1009bbf0 <.text+0x9abf0>:
1009bbf0:	56                   	push   esi
1009bbf1:	6a 00                	push   0x0
1009bbf3:	6a 00                	push   0x0
1009bbf5:	ff 35 90 64 22 10    	push   DWORD PTR ds:0x10226490
1009bbfb:	8b f1                	mov    esi,ecx
1009bbfd:	6a 02                	push   0x2
1009bbff:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1009bc05:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1009bc08:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1009bc0e:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
1009bc14:	50                   	push   eax
1009bc15:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
1009bc1b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1009bc20:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1009bc23:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1009bc29:	03 81 d8 01 00 00    	add    eax,DWORD PTR [ecx+0x1d8]
1009bc2f:	50                   	push   eax
1009bc30:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
1009bc36:	6a 00                	push   0x0
1009bc38:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1009bc3e:	68 70 2d 1c 10       	push   0x101c2d70
1009bc43:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
1009bc49:	6a ff                	push   0xffffffff
1009bc4b:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
1009bc51:	83 c4 28             	add    esp,0x28
1009bc54:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1009bc5a:	5e                   	pop    esi
1009bc5b:	c2 04 00             	ret    0x4
