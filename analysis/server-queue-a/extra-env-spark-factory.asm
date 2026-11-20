
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10012700 <.text+0x11700>:
10012700:	55                   	push   ebp
10012701:	8b ec                	mov    ebp,esp
10012703:	56                   	push   esi
10012704:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10012707:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1001270a:	85 f6                	test   esi,esi
1001270c:	75 13                	jne    0x10012721
1001270e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10012714:	85 c0                	test   eax,eax
10012716:	74 06                	je     0x1001271e
10012718:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1001271e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10012721:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10012727:	85 c9                	test   ecx,ecx
10012729:	74 07                	je     0x10012732
1001272b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1001272e:	85 c0                	test   eax,eax
10012730:	75 27                	jne    0x10012759
10012732:	68 e4 00 00 00       	push   0xe4
10012737:	51                   	push   ecx
10012738:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1001273e:	83 c4 08             	add    esp,0x8
10012741:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10012744:	85 c0                	test   eax,eax
10012746:	74 0c                	je     0x10012754
10012748:	c7 00 c8 5b 1a 10    	mov    DWORD PTR [eax],0x101a5bc8
1001274e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10012751:	5e                   	pop    esi
10012752:	5d                   	pop    ebp
10012753:	c3                   	ret
10012754:	33 c0                	xor    eax,eax
10012756:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10012759:	5e                   	pop    esi
1001275a:	5d                   	pop    ebp
1001275b:	c3                   	ret
