
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011bb00 <.text+0x11ab00>:
1011bb00:	55                   	push   ebp
1011bb01:	8b ec                	mov    ebp,esp
1011bb03:	51                   	push   ecx
1011bb04:	56                   	push   esi
1011bb05:	8b f1                	mov    esi,ecx
1011bb07:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
1011bb0d:	56                   	push   esi
1011bb0e:	8b 01                	mov    eax,DWORD PTR [ecx]
1011bb10:	8b 80 8c 00 00 00    	mov    eax,DWORD PTR [eax+0x8c]
1011bb16:	ff d0                	call   eax
1011bb18:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
1011bb1b:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1011bb20:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
1011bb27:	9f                   	lahf
1011bb28:	f6 c4 44             	test   ah,0x44
1011bb2b:	7a 0c                	jp     0x1011bb39
1011bb2d:	8b ce                	mov    ecx,esi
1011bb2f:	e8 8c 26 00 00       	call   0x1011e1c0
1011bb34:	5e                   	pop    esi
1011bb35:	8b e5                	mov    esp,ebp
1011bb37:	5d                   	pop    ebp
1011bb38:	c3                   	ret
1011bb39:	8b 06                	mov    eax,DWORD PTR [esi]
1011bb3b:	51                   	push   ecx
1011bb3c:	8b ce                	mov    ecx,esi
1011bb3e:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1011bb43:	ff 50 08             	call   DWORD PTR [eax+0x8]
1011bb46:	5e                   	pop    esi
1011bb47:	8b e5                	mov    esp,ebp
1011bb49:	5d                   	pop    ebp
1011bb4a:	c3                   	ret
