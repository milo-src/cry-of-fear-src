
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10091300 <.text+0x90300>:
10091300:	55                   	push   ebp
10091301:	8b ec                	mov    ebp,esp
10091303:	56                   	push   esi
10091304:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10091307:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1009130a:	85 f6                	test   esi,esi
1009130c:	75 13                	jne    0x10091321
1009130e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10091314:	85 c0                	test   eax,eax
10091316:	74 06                	je     0x1009131e
10091318:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1009131e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10091321:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10091327:	85 c9                	test   ecx,ecx
10091329:	74 07                	je     0x10091332
1009132b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1009132e:	85 c0                	test   eax,eax
10091330:	75 27                	jne    0x10091359
10091332:	68 e0 00 00 00       	push   0xe0
10091337:	51                   	push   ecx
10091338:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1009133e:	83 c4 08             	add    esp,0x8
10091341:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10091344:	85 c0                	test   eax,eax
10091346:	74 0c                	je     0x10091354
10091348:	c7 00 90 3b 1c 10    	mov    DWORD PTR [eax],0x101c3b90
1009134e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10091351:	5e                   	pop    esi
10091352:	5d                   	pop    ebp
10091353:	c3                   	ret
10091354:	33 c0                	xor    eax,eax
10091356:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10091359:	5e                   	pop    esi
1009135a:	5d                   	pop    ebp
1009135b:	c3                   	ret
