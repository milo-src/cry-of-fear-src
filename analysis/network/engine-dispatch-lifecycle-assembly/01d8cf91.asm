 1d8cf91:	55                   	push   ebp
 1d8cf92:	8b ec                	mov    ebp,esp
 1d8cf94:	51                   	push   ecx
 1d8cf95:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d8cf98:	50                   	push   eax
 1d8cf99:	e8 08 44 0e 00       	call   0x1e713a6
 1d8cf9e:	83 c4 04             	add    esp,0x4
 1d8cfa1:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
 1d8cfa4:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1d8cfa7:	51                   	push   ecx
 1d8cfa8:	6a 00                	push   0x0
 1d8cfaa:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
 1d8cfad:	52                   	push   edx
 1d8cfae:	e8 5d 42 0e 00       	call   0x1e71210
 1d8cfb3:	83 c4 0c             	add    esp,0xc
 1d8cfb6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
 1d8cfb9:	8b e5                	mov    esp,ebp
 1d8cfbb:	5d                   	pop    ebp
 1d8cfbc:	c3                   	ret
