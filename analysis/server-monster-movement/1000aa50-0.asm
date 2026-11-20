
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000aa50 <.text+0x9a50>:
1000aa50:	55                   	push   ebp
1000aa51:	8b ec                	mov    ebp,esp
1000aa53:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000aa56:	89 81 30 02 00 00    	mov    DWORD PTR [ecx+0x230],eax
1000aa5c:	c7 81 34 02 00 00 00 	mov    DWORD PTR [ecx+0x234],0x0
1000aa63:	00 00 00 
1000aa66:	c7 81 2c 02 00 00 00 	mov    DWORD PTR [ecx+0x22c],0x0
1000aa6d:	00 00 00 
1000aa70:	c7 81 80 01 00 00 00 	mov    DWORD PTR [ecx+0x180],0x0
1000aa77:	00 00 00 
1000aa7a:	c7 81 20 03 00 00 00 	mov    DWORD PTR [ecx+0x320],0x0
1000aa81:	00 00 00 
1000aa84:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
1000aa87:	81 e1 00 00 02 00    	and    ecx,0x20000
1000aa8d:	74 1a                	je     0x1000aaa9
1000aa8f:	83 78 0c 00          	cmp    DWORD PTR [eax+0xc],0x0
1000aa93:	75 1a                	jne    0x1000aaaf
1000aa95:	68 b0 1f 1a 10       	push   0x101a1fb0
1000aa9a:	6a 02                	push   0x2
1000aa9c:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000aaa2:	83 c4 08             	add    esp,0x8
1000aaa5:	5d                   	pop    ebp
1000aaa6:	c2 04 00             	ret    0x4
1000aaa9:	83 78 0c 00          	cmp    DWORD PTR [eax+0xc],0x0
1000aaad:	74 14                	je     0x1000aac3
1000aaaf:	85 c9                	test   ecx,ecx
1000aab1:	75 10                	jne    0x1000aac3
1000aab3:	68 d8 1f 1a 10       	push   0x101a1fd8
1000aab8:	6a 02                	push   0x2
1000aaba:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000aac0:	83 c4 08             	add    esp,0x8
1000aac3:	5d                   	pop    ebp
1000aac4:	c2 04 00             	ret    0x4
