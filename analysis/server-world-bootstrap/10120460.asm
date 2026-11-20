
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10120460 <.text+0x11f460>:
10120460:	55                   	push   ebp
10120461:	8b ec                	mov    ebp,esp
10120463:	56                   	push   esi
10120464:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10120467:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1012046a:	85 f6                	test   esi,esi
1012046c:	75 13                	jne    0x10120481
1012046e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10120474:	85 c0                	test   eax,eax
10120476:	74 06                	je     0x1012047e
10120478:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1012047e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10120481:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10120487:	85 c9                	test   ecx,ecx
10120489:	74 07                	je     0x10120492
1012048b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1012048e:	85 c0                	test   eax,eax
10120490:	75 27                	jne    0x101204b9
10120492:	68 00 05 00 00       	push   0x500
10120497:	51                   	push   ecx
10120498:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1012049e:	83 c4 08             	add    esp,0x8
101204a1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
101204a4:	85 c0                	test   eax,eax
101204a6:	74 0c                	je     0x101204b4
101204a8:	c7 00 48 6a 1e 10    	mov    DWORD PTR [eax],0x101e6a48
101204ae:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
101204b1:	5e                   	pop    esi
101204b2:	5d                   	pop    ebp
101204b3:	c3                   	ret
101204b4:	33 c0                	xor    eax,eax
101204b6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
101204b9:	5e                   	pop    esi
101204ba:	5d                   	pop    ebp
101204bb:	c3                   	ret
