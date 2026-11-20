
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1002f550 <.text+0x2e550>:
1002f550:	55                   	push   ebp
1002f551:	8b ec                	mov    ebp,esp
1002f553:	6a ff                	push   0xffffffff
1002f555:	68 ed d2 19 10       	push   0x1019d2ed
1002f55a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1002f560:	50                   	push   eax
1002f561:	83 ec 08             	sub    esp,0x8
1002f564:	56                   	push   esi
1002f565:	57                   	push   edi
1002f566:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1002f56b:	33 c5                	xor    eax,ebp
1002f56d:	50                   	push   eax
1002f56e:	8d 45 f4             	lea    eax,[ebp-0xc]
1002f571:	64 a3 00 00 00 00    	mov    fs:0x0,eax
1002f577:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1002f57a:	8b 07                	mov    eax,DWORD PTR [edi]
1002f57c:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1002f57f:	8b 44 38 30          	mov    eax,DWORD PTR [eax+edi*1+0x30]
1002f583:	8b 70 04             	mov    esi,DWORD PTR [eax+0x4]
1002f586:	8b ce                	mov    ecx,esi
1002f588:	89 75 f0             	mov    DWORD PTR [ebp-0x10],esi
1002f58b:	8b 06                	mov    eax,DWORD PTR [esi]
1002f58d:	ff 50 04             	call   DWORD PTR [eax+0x4]
1002f590:	8d 45 ec             	lea    eax,[ebp-0x14]
1002f593:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
1002f59a:	50                   	push   eax
1002f59b:	e8 b0 01 00 00       	call   0x1002f750
1002f5a0:	83 c4 04             	add    esp,0x4
1002f5a3:	8b c8                	mov    ecx,eax
1002f5a5:	8b 10                	mov    edx,DWORD PTR [eax]
1002f5a7:	6a 0a                	push   0xa
1002f5a9:	8b 42 20             	mov    eax,DWORD PTR [edx+0x20]
1002f5ac:	ff d0                	call   eax
1002f5ae:	88 45 08             	mov    BYTE PTR [ebp+0x8],al
1002f5b1:	c7 45 fc ff ff ff ff 	mov    DWORD PTR [ebp-0x4],0xffffffff
1002f5b8:	85 f6                	test   esi,esi
1002f5ba:	74 13                	je     0x1002f5cf
1002f5bc:	8b 06                	mov    eax,DWORD PTR [esi]
1002f5be:	8b ce                	mov    ecx,esi
1002f5c0:	ff 50 08             	call   DWORD PTR [eax+0x8]
1002f5c3:	85 c0                	test   eax,eax
1002f5c5:	74 08                	je     0x1002f5cf
1002f5c7:	8b 10                	mov    edx,DWORD PTR [eax]
1002f5c9:	8b c8                	mov    ecx,eax
1002f5cb:	6a 01                	push   0x1
1002f5cd:	ff 12                	call   DWORD PTR [edx]
1002f5cf:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1002f5d2:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1002f5d5:	57                   	push   edi
1002f5d6:	e8 75 fd ff ff       	call   0x1002f350
1002f5db:	83 c4 0c             	add    esp,0xc
1002f5de:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
1002f5e1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1002f5e8:	59                   	pop    ecx
1002f5e9:	5f                   	pop    edi
1002f5ea:	5e                   	pop    esi
1002f5eb:	8b e5                	mov    esp,ebp
1002f5ed:	5d                   	pop    ebp
1002f5ee:	c3                   	ret
