
D:\Steam\steamapps\common\Cry of Fear\hw.dll:     file format pei-i386


Disassembly of section .text:

01d7d873 <.text+0x7c873>:
 1d7d873:	55                   	push   ebp
 1d7d874:	8b ec                	mov    ebp,esp
 1d7d876:	81 ec 04 04 00 00    	sub    esp,0x404
 1d7d87c:	83 3d ec 9d 3c 02 00 	cmp    DWORD PTR ds:0x23c9dec,0x0
 1d7d883:	74 0d                	je     0x1d7d892
 1d7d885:	68 ac cb eb 01       	push   0x1ebcbac
 1d7d88a:	e8 c7 4d 07 00       	call   0x1df2656
 1d7d88f:	83 c4 04             	add    esp,0x4
 1d7d892:	c7 05 ec 9d 3c 02 01 	mov    DWORD PTR ds:0x23c9dec,0x1
 1d7d899:	00 00 00 
 1d7d89c:	e8 0b 4c ff ff       	call   0x1d724ac
 1d7d8a1:	8d 45 0c             	lea    eax,[ebp+0xc]
 1d7d8a4:	89 85 fc fb ff ff    	mov    DWORD PTR [ebp-0x404],eax
 1d7d8aa:	8b 8d fc fb ff ff    	mov    ecx,DWORD PTR [ebp-0x404]
 1d7d8b0:	51                   	push   ecx
 1d7d8b1:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d7d8b4:	52                   	push   edx
 1d7d8b5:	68 00 04 00 00       	push   0x400
 1d7d8ba:	8d 85 00 fc ff ff    	lea    eax,[ebp-0x400]
 1d7d8c0:	50                   	push   eax
 1d7d8c1:	e8 e8 4c 0f 00       	call   0x1e725ae
 1d7d8c6:	83 c4 10             	add    esp,0x10
 1d7d8c9:	c7 85 fc fb ff ff 00 	mov    DWORD PTR [ebp-0x404],0x0
 1d7d8d0:	00 00 00 
 1d7d8d3:	83 3d a0 03 52 02 00 	cmp    DWORD PTR ds:0x25203a0,0x0
 1d7d8da:	75 1f                	jne    0x1d7d8fb
 1d7d8dc:	d9 05 ac c9 eb 01    	fld    DWORD PTR ds:0x1ebc9ac
 1d7d8e2:	d8 1d 84 c3 e8 01    	fcomp  DWORD PTR ds:0x1e8c384
 1d7d8e8:	df e0                	fnstsw ax
 1d7d8ea:	f6 c4 40             	test   ah,0x40
 1d7d8ed:	75 0c                	jne    0x1d7d8fb
 1d7d8ef:	6a 00                	push   0x0
 1d7d8f1:	6a 00                	push   0x0
 1d7d8f3:	e8 58 a7 fb ff       	call   0x1d38050
 1d7d8f8:	83 c4 08             	add    esp,0x8
 1d7d8fb:	8d 8d 00 fc ff ff    	lea    ecx,[ebp-0x400]
 1d7d901:	51                   	push   ecx
 1d7d902:	68 cc cb eb 01       	push   0x1ebcbcc
 1d7d907:	e8 8d d1 fc ff       	call   0x1d4aa99
 1d7d90c:	83 c4 08             	add    esp,0x8
 1d7d90f:	83 3d a0 03 52 02 00 	cmp    DWORD PTR ds:0x25203a0,0x0
 1d7d916:	74 0a                	je     0x1d7d922
 1d7d918:	6a 00                	push   0x0
 1d7d91a:	e8 5c 0e 00 00       	call   0x1d7e77b
 1d7d91f:	83 c4 04             	add    esp,0x4
 1d7d922:	83 3d 80 f2 dc 02 00 	cmp    DWORD PTR ds:0x2dcf280,0x0
 1d7d929:	75 14                	jne    0x1d7d93f
 1d7d92b:	8d 95 00 fc ff ff    	lea    edx,[ebp-0x400]
 1d7d931:	52                   	push   edx
 1d7d932:	68 dc cb eb 01       	push   0x1ebcbdc
 1d7d937:	e8 1a 4d 07 00       	call   0x1df2656
 1d7d93c:	83 c4 08             	add    esp,0x8
 1d7d93f:	e8 c3 36 fb ff       	call   0x1d31007
 1d7d944:	c7 05 ec 31 dd 02 ff 	mov    DWORD PTR ds:0x2dd31ec,0xffffffff
 1d7d94b:	ff ff ff 
 1d7d94e:	c7 05 ec 9d 3c 02 00 	mov    DWORD PTR ds:0x23c9dec,0x0
 1d7d955:	00 00 00 
 1d7d958:	6a 01                	push   0x1
 1d7d95a:	68 a0 c1 7f 02       	push   0x27fc1a0
 1d7d95f:	e8 58 58 0f 00       	call   0x1e731bc
 1d7d964:	8b e5                	mov    esp,ebp
 1d7d966:	5d                   	pop    ebp
 1d7d967:	c3                   	ret
