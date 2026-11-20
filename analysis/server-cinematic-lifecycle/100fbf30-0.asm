
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fbf30 <.text+0xfaf30>:
100fbf30:	55                   	push   ebp
100fbf31:	8b ec                	mov    ebp,esp
100fbf33:	57                   	push   edi
100fbf34:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100fbf37:	85 ff                	test   edi,edi
100fbf39:	75 14                	jne    0x100fbf4f
100fbf3b:	39 7d 10             	cmp    DWORD PTR [ebp+0x10],edi
100fbf3e:	74 0f                	je     0x100fbf4f
100fbf40:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100fbf43:	e8 d8 fb ff ff       	call   0x100fbb20
100fbf48:	33 c0                	xor    eax,eax
100fbf4a:	5f                   	pop    edi
100fbf4b:	5d                   	pop    ebp
100fbf4c:	c2 0c 00             	ret    0xc
100fbf4f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fbf54:	56                   	push   esi
100fbf55:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100fbf58:	8b ce                	mov    ecx,esi
100fbf5a:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100fbf60:	03 c7                	add    eax,edi
100fbf62:	50                   	push   eax
100fbf63:	e8 48 2a f1 ff       	call   0x1000e9b0
100fbf68:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100fbf6b:	89 81 2c 01 00 00    	mov    DWORD PTR [ecx+0x12c],eax
100fbf71:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100fbf74:	83 ba 2c 01 00 00 ff 	cmp    DWORD PTR [edx+0x12c],0xffffffff
100fbf7b:	75 38                	jne    0x100fbfb5
100fbf7d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fbf82:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100fbf88:	8d 04 39             	lea    eax,[ecx+edi*1]
100fbf8b:	50                   	push   eax
100fbf8c:	8b 82 d0 01 00 00    	mov    eax,DWORD PTR [edx+0x1d0]
100fbf92:	03 c1                	add    eax,ecx
100fbf94:	50                   	push   eax
100fbf95:	68 28 df 1d 10       	push   0x101ddf28
100fbf9a:	6a 04                	push   0x4
100fbf9c:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100fbfa2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fbfa5:	83 c4 10             	add    esp,0x10
100fbfa8:	c7 80 2c 01 00 00 00 	mov    DWORD PTR [eax+0x12c],0x0
100fbfaf:	00 00 00 
100fbfb2:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100fbfb5:	8b ce                	mov    ecx,esi
100fbfb7:	c7 82 34 01 00 00 00 	mov    DWORD PTR [edx+0x134],0x0
100fbfbe:	00 00 00 
100fbfc1:	e8 1a 2a f1 ff       	call   0x1000e9e0
100fbfc6:	5e                   	pop    esi
100fbfc7:	b8 01 00 00 00       	mov    eax,0x1
100fbfcc:	5f                   	pop    edi
100fbfcd:	5d                   	pop    ebp
100fbfce:	c2 0c 00             	ret    0xc
