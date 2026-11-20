
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10015700 <.text+0x14700>:
10015700:	55                   	push   ebp
10015701:	8b ec                	mov    ebp,esp
10015703:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10015706:	56                   	push   esi
10015707:	8b f1                	mov    esi,ecx
10015709:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
1001570f:	85 c0                	test   eax,eax
10015711:	75 12                	jne    0x10015725
10015713:	50                   	push   eax
10015714:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
1001571a:	83 c4 04             	add    esp,0x4
1001571d:	85 c0                	test   eax,eax
1001571f:	75 04                	jne    0x10015725
10015721:	33 c9                	xor    ecx,ecx
10015723:	eb 03                	jmp    0x10015728
10015725:	8b 48 7c             	mov    ecx,DWORD PTR [eax+0x7c]
10015728:	8b 06                	mov    eax,DWORD PTR [esi]
1001572a:	51                   	push   ecx
1001572b:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10015732:	6a 03                	push   0x3
10015734:	56                   	push   esi
10015735:	51                   	push   ecx
10015736:	8b ce                	mov    ecx,esi
10015738:	ff 90 e8 00 00 00    	call   DWORD PTR [eax+0xe8]
1001573e:	b8 01 00 00 00       	mov    eax,0x1
10015743:	5e                   	pop    esi
10015744:	5d                   	pop    ebp
10015745:	c2 10 00             	ret    0x10
