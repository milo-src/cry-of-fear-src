
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000e310 <.text+0xd310>:
1000e310:	56                   	push   esi
1000e311:	8b f1                	mov    esi,ecx
1000e313:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1000e316:	8b 82 a4 01 00 00    	mov    eax,DWORD PTR [edx+0x1a4]
1000e31c:	8b c8                	mov    ecx,eax
1000e31e:	83 e1 02             	and    ecx,0x2
1000e321:	a8 01                	test   al,0x1
1000e323:	74 4c                	je     0x1000e371
1000e325:	85 c9                	test   ecx,ecx
1000e327:	74 25                	je     0x1000e34e
1000e329:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000e32e:	8b 8a d0 01 00 00    	mov    ecx,DWORD PTR [edx+0x1d0]
1000e334:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1000e33a:	51                   	push   ecx
1000e33b:	68 98 2a 1a 10       	push   0x101a2a98
1000e340:	6a 01                	push   0x1
1000e342:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000e348:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1000e34b:	83 c4 0c             	add    esp,0xc
1000e34e:	83 a2 a4 01 00 00 fe 	and    DWORD PTR [edx+0x1a4],0xfffffffe
1000e355:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000e358:	56                   	push   esi
1000e359:	8b 81 cc 01 00 00    	mov    eax,DWORD PTR [ecx+0x1cc]
1000e35f:	89 81 ec 01 00 00    	mov    DWORD PTR [ecx+0x1ec],eax
1000e365:	e8 76 8f 10 00       	call   0x101172e0
1000e36a:	83 c4 04             	add    esp,0x4
1000e36d:	5e                   	pop    esi
1000e36e:	c2 10 00             	ret    0x10
1000e371:	85 c9                	test   ecx,ecx
1000e373:	74 25                	je     0x1000e39a
1000e375:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000e37a:	8b 8a d0 01 00 00    	mov    ecx,DWORD PTR [edx+0x1d0]
1000e380:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1000e386:	51                   	push   ecx
1000e387:	68 b8 2a 1a 10       	push   0x101a2ab8
1000e38c:	6a 01                	push   0x1
1000e38e:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000e394:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1000e397:	83 c4 0c             	add    esp,0xc
1000e39a:	83 8a a4 01 00 00 01 	or     DWORD PTR [edx+0x1a4],0x1
1000e3a1:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000e3a4:	56                   	push   esi
1000e3a5:	8b 81 d4 01 00 00    	mov    eax,DWORD PTR [ecx+0x1d4]
1000e3ab:	89 81 ec 01 00 00    	mov    DWORD PTR [ecx+0x1ec],eax
1000e3b1:	e8 2a 8f 10 00       	call   0x101172e0
1000e3b6:	83 c4 04             	add    esp,0x4
1000e3b9:	5e                   	pop    esi
1000e3ba:	c2 10 00             	ret    0x10
