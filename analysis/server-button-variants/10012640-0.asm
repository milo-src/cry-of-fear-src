
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10012640 <.text+0x11640>:
10012640:	55                   	push   ebp
10012641:	8b ec                	mov    ebp,esp
10012643:	56                   	push   esi
10012644:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10012647:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1001264a:	85 f6                	test   esi,esi
1001264c:	75 13                	jne    0x10012661
1001264e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10012654:	85 c0                	test   eax,eax
10012656:	74 06                	je     0x1001265e
10012658:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1001265e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10012661:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10012667:	85 c9                	test   ecx,ecx
10012669:	74 07                	je     0x10012672
1001266b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1001266e:	85 c0                	test   eax,eax
10012670:	75 27                	jne    0x10012699
10012672:	68 dc 00 00 00       	push   0xdc
10012677:	51                   	push   ecx
10012678:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1001267e:	83 c4 08             	add    esp,0x8
10012681:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10012684:	85 c0                	test   eax,eax
10012686:	74 0c                	je     0x10012694
10012688:	c7 00 00 5d 1a 10    	mov    DWORD PTR [eax],0x101a5d00
1001268e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10012691:	5e                   	pop    esi
10012692:	5d                   	pop    ebp
10012693:	c3                   	ret
10012694:	33 c0                	xor    eax,eax
10012696:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10012699:	5e                   	pop    esi
1001269a:	5d                   	pop    ebp
1001269b:	c3                   	ret
