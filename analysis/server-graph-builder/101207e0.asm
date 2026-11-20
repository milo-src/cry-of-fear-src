
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101207e0 <.text+0x11f7e0>:
101207e0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
101207e5:	53                   	push   ebx
101207e6:	56                   	push   esi
101207e7:	57                   	push   edi
101207e8:	bf bc 6d 1e 10       	mov    edi,0x101e6dbc
101207ed:	2b b8 98 00 00 00    	sub    edi,DWORD PTR [eax+0x98]
101207f3:	57                   	push   edi
101207f4:	ff 15 a4 2f 22 10    	call   DWORD PTR ds:0x10222fa4
101207fa:	83 c4 04             	add    esp,0x4
101207fd:	a3 60 1f 23 10       	mov    ds:0x10231f60,eax
10120802:	85 c0                	test   eax,eax
10120804:	75 04                	jne    0x1012080a
10120806:	33 f6                	xor    esi,esi
10120808:	eb 06                	jmp    0x10120810
1012080a:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
10120810:	bb 03 00 00 00       	mov    ebx,0x3
10120815:	57                   	push   edi
10120816:	ff 15 a4 2f 22 10    	call   DWORD PTR ds:0x10222fa4
1012081c:	89 86 9c 01 00 00    	mov    DWORD PTR [esi+0x19c],eax
10120822:	83 c4 04             	add    esp,0x4
10120825:	8b f0                	mov    esi,eax
10120827:	83 e8 80             	sub    eax,0xffffff80
1012082a:	f7 de                	neg    esi
1012082c:	1b f6                	sbb    esi,esi
1012082e:	23 f0                	and    esi,eax
10120830:	83 eb 01             	sub    ebx,0x1
10120833:	75 e0                	jne    0x10120815
10120835:	a1 60 1f 23 10       	mov    eax,ds:0x10231f60
1012083a:	5f                   	pop    edi
1012083b:	89 86 9c 01 00 00    	mov    DWORD PTR [esi+0x19c],eax
10120841:	5e                   	pop    esi
10120842:	5b                   	pop    ebx
10120843:	c3                   	ret
