
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008ced0 <.text+0x8bed0>:
1008ced0:	55                   	push   ebp
1008ced1:	8b ec                	mov    ebp,esp
1008ced3:	56                   	push   esi
1008ced4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1008ced7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1008ceda:	85 f6                	test   esi,esi
1008cedc:	75 13                	jne    0x1008cef1
1008cede:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1008cee4:	85 c0                	test   eax,eax
1008cee6:	74 06                	je     0x1008ceee
1008cee8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1008ceee:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1008cef1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1008cef7:	85 c9                	test   ecx,ecx
1008cef9:	74 07                	je     0x1008cf02
1008cefb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1008cefe:	85 c0                	test   eax,eax
1008cf00:	75 27                	jne    0x1008cf29
1008cf02:	68 b8 01 00 00       	push   0x1b8
1008cf07:	51                   	push   ecx
1008cf08:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1008cf0e:	83 c4 08             	add    esp,0x8
1008cf11:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1008cf14:	85 c0                	test   eax,eax
1008cf16:	74 0c                	je     0x1008cf24
1008cf18:	c7 00 9c f5 1b 10    	mov    DWORD PTR [eax],0x101bf59c
1008cf1e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1008cf21:	5e                   	pop    esi
1008cf22:	5d                   	pop    ebp
1008cf23:	c3                   	ret
1008cf24:	33 c0                	xor    eax,eax
1008cf26:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1008cf29:	5e                   	pop    esi
1008cf2a:	5d                   	pop    ebp
1008cf2b:	c3                   	ret
