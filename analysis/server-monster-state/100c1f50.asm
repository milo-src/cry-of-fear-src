
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c1f50 <.text+0xc0f50>:
100c1f50:	55                   	push   ebp
100c1f51:	8b ec                	mov    ebp,esp
100c1f53:	53                   	push   ebx
100c1f54:	56                   	push   esi
100c1f55:	57                   	push   edi
100c1f56:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100c1f59:	8b f1                	mov    esi,ecx
100c1f5b:	57                   	push   edi
100c1f5c:	e8 ef c9 f4 ff       	call   0x1000e950
100c1f61:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c1f64:	8b d8                	mov    ebx,eax
100c1f66:	83 fb ff             	cmp    ebx,0xffffffff
100c1f69:	7e 66                	jle    0x100c1fd1
100c1f6b:	39 99 2c 01 00 00    	cmp    DWORD PTR [ecx+0x12c],ebx
100c1f71:	75 0b                	jne    0x100c1f7e
100c1f73:	83 be fc 00 00 00 00 	cmp    DWORD PTR [esi+0xfc],0x0
100c1f7a:	8b d1                	mov    edx,ecx
100c1f7c:	75 29                	jne    0x100c1fa7
100c1f7e:	8b 86 14 02 00 00    	mov    eax,DWORD PTR [esi+0x214]
100c1f84:	83 f8 03             	cmp    eax,0x3
100c1f87:	74 05                	je     0x100c1f8e
100c1f89:	83 f8 04             	cmp    eax,0x4
100c1f8c:	75 0c                	jne    0x100c1f9a
100c1f8e:	8b d1                	mov    edx,ecx
100c1f90:	83 ff 03             	cmp    edi,0x3
100c1f93:	74 12                	je     0x100c1fa7
100c1f95:	83 ff 04             	cmp    edi,0x4
100c1f98:	74 0d                	je     0x100c1fa7
100c1f9a:	c7 81 34 01 00 00 00 	mov    DWORD PTR [ecx+0x134],0x0
100c1fa1:	00 00 00 
100c1fa4:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100c1fa7:	8b ce                	mov    ecx,esi
100c1fa9:	89 9a 2c 01 00 00    	mov    DWORD PTR [edx+0x12c],ebx
100c1faf:	e8 2c ca f4 ff       	call   0x1000e9e0
100c1fb4:	8b 06                	mov    eax,DWORD PTR [esi]
100c1fb6:	8b ce                	mov    ecx,esi
100c1fb8:	ff 90 c0 01 00 00    	call   DWORD PTR [eax+0x1c0]
100c1fbe:	89 be 18 02 00 00    	mov    DWORD PTR [esi+0x218],edi
100c1fc4:	89 be 14 02 00 00    	mov    DWORD PTR [esi+0x214],edi
100c1fca:	5f                   	pop    edi
100c1fcb:	5e                   	pop    esi
100c1fcc:	5b                   	pop    ebx
100c1fcd:	5d                   	pop    ebp
100c1fce:	c2 04 00             	ret    0x4
100c1fd1:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c1fd6:	57                   	push   edi
100c1fd7:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100c1fdd:	03 01                	add    eax,DWORD PTR [ecx]
100c1fdf:	50                   	push   eax
100c1fe0:	68 fc ae 1a 10       	push   0x101aaefc
100c1fe5:	6a 01                	push   0x1
100c1fe7:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c1fed:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c1ff0:	83 c4 10             	add    esp,0x10
100c1ff3:	c7 80 2c 01 00 00 00 	mov    DWORD PTR [eax+0x12c],0x0
100c1ffa:	00 00 00 
100c1ffd:	89 be 18 02 00 00    	mov    DWORD PTR [esi+0x218],edi
100c2003:	89 be 14 02 00 00    	mov    DWORD PTR [esi+0x214],edi
100c2009:	5f                   	pop    edi
100c200a:	5e                   	pop    esi
100c200b:	5b                   	pop    ebx
100c200c:	5d                   	pop    ebp
100c200d:	c2 04 00             	ret    0x4
