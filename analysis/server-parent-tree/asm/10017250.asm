
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10017250 <.text+0x16250>:
10017250:	56                   	push   esi
10017251:	8b f1                	mov    esi,ecx
10017253:	8b 46 60             	mov    eax,DWORD PTR [esi+0x60]
10017256:	a8 a0                	test   al,0xa0
10017258:	74 0c                	je     0x10017266
1001725a:	56                   	push   esi
1001725b:	e8 80 d2 0a 00       	call   0x100c44e0
10017260:	8b 46 60             	mov    eax,DWORD PTR [esi+0x60]
10017263:	83 c4 04             	add    esp,0x4
10017266:	a9 00 10 00 00       	test   eax,0x1000
1001726b:	74 09                	je     0x10017276
1001726d:	56                   	push   esi
1001726e:	e8 6d 00 10 00       	call   0x101172e0
10017273:	83 c4 04             	add    esp,0x4
10017276:	83 7e 74 00          	cmp    DWORD PTR [esi+0x74],0x0
1001727a:	75 16                	jne    0x10017292
1001727c:	8b ce                	mov    ecx,esi
1001727e:	c7 46 74 01 00 00 00 	mov    DWORD PTR [esi+0x74],0x1
10017285:	e8 36 09 00 00       	call   0x10017bc0
1001728a:	8b 06                	mov    eax,DWORD PTR [esi]
1001728c:	8b ce                	mov    ecx,esi
1001728e:	5e                   	pop    esi
1001728f:	ff 60 48             	jmp    DWORD PTR [eax+0x48]
10017292:	5e                   	pop    esi
10017293:	c3                   	ret
