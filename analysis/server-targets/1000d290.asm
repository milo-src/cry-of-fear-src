
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000d290 <.text+0xc290>:
1000d290:	55                   	push   ebp
1000d291:	8b ec                	mov    ebp,esp
1000d293:	56                   	push   esi
1000d294:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000d297:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000d29a:	85 f6                	test   esi,esi
1000d29c:	75 13                	jne    0x1000d2b1
1000d29e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1000d2a4:	85 c0                	test   eax,eax
1000d2a6:	74 06                	je     0x1000d2ae
1000d2a8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1000d2ae:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000d2b1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1000d2b7:	85 c9                	test   ecx,ecx
1000d2b9:	74 07                	je     0x1000d2c2
1000d2bb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1000d2be:	85 c0                	test   eax,eax
1000d2c0:	75 27                	jne    0x1000d2e9
1000d2c2:	68 64 01 00 00       	push   0x164
1000d2c7:	51                   	push   ecx
1000d2c8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1000d2ce:	83 c4 08             	add    esp,0x8
1000d2d1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1000d2d4:	85 c0                	test   eax,eax
1000d2d6:	74 0c                	je     0x1000d2e4
1000d2d8:	c7 00 10 27 1a 10    	mov    DWORD PTR [eax],0x101a2710
1000d2de:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000d2e1:	5e                   	pop    esi
1000d2e2:	5d                   	pop    ebp
1000d2e3:	c3                   	ret
1000d2e4:	33 c0                	xor    eax,eax
1000d2e6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000d2e9:	5e                   	pop    esi
1000d2ea:	5d                   	pop    ebp
1000d2eb:	c3                   	ret
