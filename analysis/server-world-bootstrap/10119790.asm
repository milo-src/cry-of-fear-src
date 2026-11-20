
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10119790 <.text+0x118790>:
10119790:	55                   	push   ebp
10119791:	8b ec                	mov    ebp,esp
10119793:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10119798:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1011979b:	56                   	push   esi
1011979c:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
101197a2:	51                   	push   ecx
101197a3:	ff 15 a4 2f 22 10    	call   DWORD PTR ds:0x10222fa4
101197a9:	8b f0                	mov    esi,eax
101197ab:	83 c4 04             	add    esp,0x4
101197ae:	85 f6                	test   esi,esi
101197b0:	74 3f                	je     0x101197f1
101197b2:	56                   	push   esi
101197b3:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
101197b9:	83 c4 04             	add    esp,0x4
101197bc:	85 c0                	test   eax,eax
101197be:	74 31                	je     0x101197f1
101197c0:	8b 86 8c 02 00 00    	mov    eax,DWORD PTR [esi+0x28c]
101197c6:	85 c0                	test   eax,eax
101197c8:	75 0e                	jne    0x101197d8
101197ca:	50                   	push   eax
101197cb:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
101197d1:	83 c4 04             	add    esp,0x4
101197d4:	85 c0                	test   eax,eax
101197d6:	74 0c                	je     0x101197e4
101197d8:	8b 48 7c             	mov    ecx,DWORD PTR [eax+0x7c]
101197db:	85 c9                	test   ecx,ecx
101197dd:	74 05                	je     0x101197e4
101197df:	8b 01                	mov    eax,DWORD PTR [ecx]
101197e1:	ff 50 30             	call   DWORD PTR [eax+0x30]
101197e4:	56                   	push   esi
101197e5:	ff 15 a0 2f 22 10    	call   DWORD PTR ds:0x10222fa0
101197eb:	83 c4 04             	add    esp,0x4
101197ee:	5e                   	pop    esi
101197ef:	5d                   	pop    ebp
101197f0:	c3                   	ret
101197f1:	68 44 58 1e 10       	push   0x101e5844
101197f6:	6a 01                	push   0x1
101197f8:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
101197fe:	83 c4 08             	add    esp,0x8
10119801:	5e                   	pop    esi
10119802:	5d                   	pop    ebp
10119803:	c3                   	ret
