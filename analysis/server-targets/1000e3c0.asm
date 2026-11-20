
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000e3c0 <.text+0xd3c0>:
1000e3c0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000e3c5:	56                   	push   esi
1000e3c6:	57                   	push   edi
1000e3c7:	8b f9                	mov    edi,ecx
1000e3c9:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1000e3cf:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
1000e3d2:	03 82 cc 01 00 00    	add    eax,DWORD PTR [edx+0x1cc]
1000e3d8:	50                   	push   eax
1000e3d9:	6a 00                	push   0x0
1000e3db:	e8 b0 a1 10 00       	call   0x10118590
1000e3e0:	8b f0                	mov    esi,eax
1000e3e2:	83 c4 08             	add    esp,0x8
1000e3e5:	85 f6                	test   esi,esi
1000e3e7:	74 5e                	je     0x1000e447
1000e3e9:	8b 16                	mov    edx,DWORD PTR [esi]
1000e3eb:	8b ce                	mov    ecx,esi
1000e3ed:	ff 52 24             	call   DWORD PTR [edx+0x24]
1000e3f0:	85 c0                	test   eax,eax
1000e3f2:	74 53                	je     0x1000e447
1000e3f4:	53                   	push   ebx
1000e3f5:	8b 5f 04             	mov    ebx,DWORD PTR [edi+0x4]
1000e3f8:	f6 83 a4 01 00 00 02 	test   BYTE PTR [ebx+0x1a4],0x2
1000e3ff:	74 35                	je     0x1000e436
1000e401:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000e406:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000e409:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
1000e40f:	8b 81 d0 01 00 00    	mov    eax,DWORD PTR [ecx+0x1d0]
1000e415:	03 c2                	add    eax,edx
1000e417:	50                   	push   eax
1000e418:	8b 01                	mov    eax,DWORD PTR [ecx]
1000e41a:	03 c2                	add    eax,edx
1000e41c:	50                   	push   eax
1000e41d:	8b 83 d0 01 00 00    	mov    eax,DWORD PTR [ebx+0x1d0]
1000e423:	03 c2                	add    eax,edx
1000e425:	50                   	push   eax
1000e426:	68 54 2b 1a 10       	push   0x101a2b54
1000e42b:	6a 01                	push   0x1
1000e42d:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000e433:	83 c4 14             	add    esp,0x14
1000e436:	8b 06                	mov    eax,DWORD PTR [esi]
1000e438:	8b ce                	mov    ecx,esi
1000e43a:	57                   	push   edi
1000e43b:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1000e441:	5b                   	pop    ebx
1000e442:	5f                   	pop    edi
1000e443:	5e                   	pop    esi
1000e444:	c2 10 00             	ret    0x10
1000e447:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
1000e44a:	8b b2 cc 01 00 00    	mov    esi,DWORD PTR [edx+0x1cc]
1000e450:	85 f6                	test   esi,esi
1000e452:	74 28                	je     0x1000e47c
1000e454:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000e459:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
1000e45f:	8d 04 0e             	lea    eax,[esi+ecx*1]
1000e462:	50                   	push   eax
1000e463:	8b 82 d0 01 00 00    	mov    eax,DWORD PTR [edx+0x1d0]
1000e469:	03 c1                	add    eax,ecx
1000e46b:	50                   	push   eax
1000e46c:	68 8c 2b 1a 10       	push   0x101a2b8c
1000e471:	6a 01                	push   0x1
1000e473:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000e479:	83 c4 10             	add    esp,0x10
1000e47c:	5f                   	pop    edi
1000e47d:	5e                   	pop    esi
1000e47e:	c2 10 00             	ret    0x10
