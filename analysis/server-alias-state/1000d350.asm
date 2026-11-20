
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000d350 <.text+0xc350>:
1000d350:	55                   	push   ebp
1000d351:	8b ec                	mov    ebp,esp
1000d353:	56                   	push   esi
1000d354:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000d357:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000d35a:	85 f6                	test   esi,esi
1000d35c:	75 13                	jne    0x1000d371
1000d35e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1000d364:	85 c0                	test   eax,eax
1000d366:	74 06                	je     0x1000d36e
1000d368:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1000d36e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000d371:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1000d377:	85 c9                	test   ecx,ecx
1000d379:	74 07                	je     0x1000d382
1000d37b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1000d37e:	85 c0                	test   eax,eax
1000d380:	75 27                	jne    0x1000d3a9
1000d382:	68 dc 00 00 00       	push   0xdc
1000d387:	51                   	push   ecx
1000d388:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1000d38e:	83 c4 08             	add    esp,0x8
1000d391:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1000d394:	85 c0                	test   eax,eax
1000d396:	74 0c                	je     0x1000d3a4
1000d398:	c7 00 70 2c 1a 10    	mov    DWORD PTR [eax],0x101a2c70
1000d39e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000d3a1:	5e                   	pop    esi
1000d3a2:	5d                   	pop    ebp
1000d3a3:	c3                   	ret
1000d3a4:	33 c0                	xor    eax,eax
1000d3a6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000d3a9:	5e                   	pop    esi
1000d3aa:	5d                   	pop    ebp
1000d3ab:	c3                   	ret
