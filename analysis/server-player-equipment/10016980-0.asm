
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10016980 <.text+0x15980>:
10016980:	55                   	push   ebp
10016981:	8b ec                	mov    ebp,esp
10016983:	83 3d f0 2d 22 10 00 	cmp    DWORD PTR ds:0x10222df0,0x0
1001698a:	75 48                	jne    0x100169d4
1001698c:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1001698f:	85 c9                	test   ecx,ecx
10016991:	74 05                	je     0x10016998
10016993:	8b 49 7c             	mov    ecx,DWORD PTR [ecx+0x7c]
10016996:	eb 02                	jmp    0x1001699a
10016998:	33 c9                	xor    ecx,ecx
1001699a:	56                   	push   esi
1001699b:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
1001699e:	85 f6                	test   esi,esi
100169a0:	74 05                	je     0x100169a7
100169a2:	8b 76 7c             	mov    esi,DWORD PTR [esi+0x7c]
100169a5:	eb 02                	jmp    0x100169a9
100169a7:	33 f6                	xor    esi,esi
100169a9:	85 c9                	test   ecx,ecx
100169ab:	74 26                	je     0x100169d3
100169ad:	85 f6                	test   esi,esi
100169af:	74 22                	je     0x100169d3
100169b1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100169b4:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
100169b7:	8b 80 a8 01 00 00    	mov    eax,DWORD PTR [eax+0x1a8]
100169bd:	0b 82 a8 01 00 00    	or     eax,DWORD PTR [edx+0x1a8]
100169c3:	a9 00 00 00 40       	test   eax,0x40000000
100169c8:	75 09                	jne    0x100169d3
100169ca:	8b 01                	mov    eax,DWORD PTR [ecx]
100169cc:	56                   	push   esi
100169cd:	ff 90 e4 00 00 00    	call   DWORD PTR [eax+0xe4]
100169d3:	5e                   	pop    esi
100169d4:	5d                   	pop    ebp
100169d5:	c3                   	ret
