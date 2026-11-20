
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e4e00 <.text+0xe3e00>:
100e4e00:	56                   	push   esi
100e4e01:	8b f1                	mov    esi,ecx
100e4e03:	8d 8e 48 23 00 00    	lea    ecx,[esi+0x2348]
100e4e09:	e8 72 29 f3 ff       	call   0x10017780
100e4e0e:	85 c0                	test   eax,eax
100e4e10:	75 0f                	jne    0x100e4e21
100e4e12:	8d 8e 88 03 00 00    	lea    ecx,[esi+0x388]
100e4e18:	e8 63 29 f3 ff       	call   0x10017780
100e4e1d:	85 c0                	test   eax,eax
100e4e1f:	74 27                	je     0x100e4e48
100e4e21:	83 be 38 20 00 00 00 	cmp    DWORD PTR [esi+0x2038],0x0
100e4e28:	74 1e                	je     0x100e4e48
100e4e2a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e4e2d:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e4e33:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100e4e39:	83 c4 04             	add    esp,0x4
100e4e3c:	39 86 38 20 00 00    	cmp    DWORD PTR [esi+0x2038],eax
100e4e42:	74 04                	je     0x100e4e48
100e4e44:	b0 01                	mov    al,0x1
100e4e46:	5e                   	pop    esi
100e4e47:	c3                   	ret
100e4e48:	32 c0                	xor    al,al
100e4e4a:	5e                   	pop    esi
100e4e4b:	c3                   	ret
