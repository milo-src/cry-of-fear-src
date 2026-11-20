
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10020600 <.text+0x1f600>:
10020600:	55                   	push   ebp
10020601:	8b ec                	mov    ebp,esp
10020603:	56                   	push   esi
10020604:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10020607:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1002060a:	85 f6                	test   esi,esi
1002060c:	75 13                	jne    0x10020621
1002060e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10020614:	85 c0                	test   eax,eax
10020616:	74 06                	je     0x1002061e
10020618:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1002061e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10020621:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10020627:	85 c9                	test   ecx,ecx
10020629:	74 07                	je     0x10020632
1002062b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1002062e:	85 c0                	test   eax,eax
10020630:	75 27                	jne    0x10020659
10020632:	68 68 03 00 00       	push   0x368
10020637:	51                   	push   ecx
10020638:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1002063e:	83 c4 08             	add    esp,0x8
10020641:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10020644:	85 c0                	test   eax,eax
10020646:	74 0c                	je     0x10020654
10020648:	c7 00 9c 9b 1a 10    	mov    DWORD PTR [eax],0x101a9b9c
1002064e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10020651:	5e                   	pop    esi
10020652:	5d                   	pop    ebp
10020653:	c3                   	ret
10020654:	33 c0                	xor    eax,eax
10020656:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10020659:	5e                   	pop    esi
1002065a:	5d                   	pop    ebp
1002065b:	c3                   	ret
