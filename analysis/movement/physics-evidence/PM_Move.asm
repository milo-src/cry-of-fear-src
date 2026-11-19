
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10006f30 <.text+0x5f30>:
10006f30:	55                   	push   ebp
10006f31:	8b ec                	mov    ebp,esp
10006f33:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10006f36:	a3 50 0c 22 10       	mov    ds:0x10220c50,eax
10006f3b:	33 c0                	xor    eax,eax
10006f3d:	39 45 0c             	cmp    DWORD PTR [ebp+0xc],eax
10006f40:	0f 95 c0             	setne  al
10006f43:	50                   	push   eax
10006f44:	e8 b7 1a 00 00       	call   0x10008a00
10006f49:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10006f4e:	83 c4 04             	add    esp,0x4
10006f51:	83 b8 e0 00 00 00 ff 	cmp    DWORD PTR [eax+0xe0],0xffffffff
10006f58:	74 0c                	je     0x10006f66
10006f5a:	81 88 b8 00 00 00 00 	or     DWORD PTR [eax+0xb8],0x200
10006f61:	02 00 00 
10006f64:	eb 0a                	jmp    0x10006f70
10006f66:	81 a0 b8 00 00 00 ff 	and    DWORD PTR [eax+0xb8],0xfffffdff
10006f6d:	fd ff ff 
10006f70:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10006f75:	83 78 08 00          	cmp    DWORD PTR [eax+0x8],0x0
10006f79:	75 13                	jne    0x10006f8e
10006f7b:	83 b8 dc 00 00 00 03 	cmp    DWORD PTR [eax+0xdc],0x3
10006f82:	75 0a                	jne    0x10006f8e
10006f84:	c7 80 c4 00 00 00 00 	mov    DWORD PTR [eax+0xc4],0x3f800000
10006f8b:	00 80 3f 
10006f8e:	5d                   	pop    ebp
10006f8f:	c3                   	ret
