
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10117700 <.text+0x116700>:
10117700:	55                   	push   ebp
10117701:	8b ec                	mov    ebp,esp
10117703:	56                   	push   esi
10117704:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
10117707:	56                   	push   esi
10117708:	e8 13 2a 00 00       	call   0x1011a120
1011770d:	83 c4 04             	add    esp,0x4
10117710:	85 c0                	test   eax,eax
10117712:	74 4c                	je     0x10117760
10117714:	6a 05                	push   0x5
10117716:	6a 00                	push   0x0
10117718:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
1011771e:	81 fe f7 00 00 00    	cmp    esi,0xf7
10117724:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10117727:	75 1d                	jne    0x10117746
10117729:	83 c0 0d             	add    eax,0xd
1011772c:	50                   	push   eax
1011772d:	56                   	push   esi
1011772e:	e8 7d 09 00 00       	call   0x101180b0
10117733:	6a 00                	push   0x0
10117735:	68 24 58 1e 10       	push   0x101e5824
1011773a:	56                   	push   esi
1011773b:	e8 a0 08 00 00       	call   0x10117fe0
10117740:	83 c4 1c             	add    esp,0x1c
10117743:	5e                   	pop    esi
10117744:	5d                   	pop    ebp
10117745:	c3                   	ret
10117746:	83 c0 13             	add    eax,0x13
10117749:	50                   	push   eax
1011774a:	56                   	push   esi
1011774b:	e8 60 09 00 00       	call   0x101180b0
10117750:	6a 00                	push   0x0
10117752:	68 30 58 1e 10       	push   0x101e5830
10117757:	56                   	push   esi
10117758:	e8 83 08 00 00       	call   0x10117fe0
1011775d:	83 c4 1c             	add    esp,0x1c
10117760:	5e                   	pop    esi
10117761:	5d                   	pop    ebp
10117762:	c3                   	ret
